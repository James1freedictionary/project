# copyright (c) - 2023, james1freedictionary
use feature qw(say);
use strict;
use warnings;
my $ans;
sub cal_pi {
	my $pi =0;
	for (my $i=1;$i<1e6+2;$i+=2){
		$pi = 4/$i-$pi ;
	}
	return $pi;
} 
sub problem {
say "1. calculate area of circle";
say "2. calculate area of rectangle";
say "3. calcuate sum of integer 1,2,3,4...,n";
say "4. calculate factorial n!= n(n-1)(n-2)(n-3)...2x1";
say "5. insert product ";
say "6. calculate sum of 2,4,6,...,2n";
print "please, choose one of them: ";
}
do {
	problem;
for( $_ = <>){
   
	if (/^1$/) {
		print "input r: "; my $r = <>;
		my $area = cal_pi * $r * $r;
		say "The area is $area";
		last;}
	elsif (/^2$/){
		print "input a: "; my $a = <>;
		print "input b: "; my $b = <>;
		my $area = $a * $b;
		say "The area is $area";}
	elsif (/^3$/){
		print "input n: ";my $n = <>;
		my $sum = 0;
		#  when inc is 1 || i++, then 
		#  find  how many loop = $n - $i if < 
		#  othewise if <= just +1 
		my $progress = 0;
		for (my $j=0; $j < $n; $j++){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
			$sum = $sum + $j+1;
	
			if ($progress <30){
				print ".";
				$progress++;
			} else {
				print "\b\b\b\b\b\b\b\b\b\b";
				print "\b\b\b\b\b\b\b\b\b\b";
				print "\b\b\b\b\b\b\b\b\b\b";
				$progress = 0;
				 }
			}
		say "\nThe sum is $sum";
		last;}
	elsif (/^4$/){
		print  "enter n: ";my $n = <>;
		chomp $n;
		my $p = 1;
		my $i = 1;
		do {
			$p = $p * $i;
			$i++;
			} while ($i<$n+1);
		say qq^$n! = $p^;
	}
	elsif (/^5$/){
		my $ans;
		my %hash;
		my $print_type = 1;
		do {
		print "Enter id: "; my $id = <>;
		print "Enter name: "; my $name = <>;
		print "Enter qty: "; my $qty = <>;
		print "price: "; my $price = <>;
		chomp $id;chomp $name;chomp $qty;chomp $price;
		my $total = $qty * $price;
		$hash{"id"} = $id;
		$hash{"name"} = $name;
		$hash{"qty"} = $qty;
		$hash{"price"} = $price;
		$hash{"total"} = $total;
		if ($print_type){
		say "========================================";
		say "ID    |  NAME   | QTY   | PRICE | TOTAL";
		$print_type = 0;
		}
		say "========================================";
		printf ("%-6.6s|%-9.9s|%-7.7s|%-7.7s|%-6.6s\n",$id ,$name  ,   $qty  , $price, $total);
		print "do you insert more product? (yes|no): "; $ans = <>;

		} until ($ans =~ /n/) 
	}
	elsif (/^6$/){
		print "Enter n: "; my $n = <>;
		my $sum=0 ;
		for (my $i = 1; $i <=$n ;$i++){
			$sum = $sum + 2*$i;
		}
		say "The sum is $sum ";
	}
	else {die "error";}
	}
	print "do you choose again? (yes/no)";
 	 $ans = <> ;
} while ( $ans =~ /y/)