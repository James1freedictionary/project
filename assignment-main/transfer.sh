#!/bin/bash -e
transfer() {
  if [[ -d $1 ]]; then
    zip -qr $1.zip $1;
    curl --progress-bar --upload-file "$1.zip" https://transfer.sh/$(basename "$1.zip") | tee /dev/null;
  elif [[ -f $1 ]]; then
    curl --progress-bar --upload-file "$1" https://transfer.sh/$(basename "$1") | tee /dev/null;
  else
    echo "$1 is not valid"
    exit 1
  fi
}
dir="basic_electronic math"
for e in $dir;do
echo -e "\ntransferring in $e"
for i in $e/*.pdf;do
echo "transferring $i"
transfer $i
done
done
