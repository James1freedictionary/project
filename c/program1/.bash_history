gcc -shared main.o product.o
ls
cp * /mnt
cd /mnt
ls
gcc -shared main.o product.o
gcc -shared main.o product.o -fPIC
make clean
ls
exit
