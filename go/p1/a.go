package main
import (
	"fmt"
	"math"
	)	
func f_switch(n int32) {
	switch n {
	case 1:
		var a float32 
		var b float32
		var area float32
		fmt.Printf("Enter a: ");fmt.Scanf("%f", &a)
		fmt.Printf("Enter b: ");fmt.Scanf("%f",&b)
		area = a * b
		fmt.Printf("The area is %f\n",area)
	
	case 2:
		var r float64
		var area float64
		fmt.Printf("Enter r: ");fmt.Scanf("%f", &r)
		area = (math.Pi)*(math.Pow(r,2))
		fmt.Printf("The area is %f\n", area)
	case 3:
		var a float64
		var b float64
		var root float64
		fmt.Printf("Enter a: ");fmt.Scanf("%f", &a)
		fmt.Printf("Enter b: ");fmt.Scanf("%f",&b)
		root = -b/a
		fmt.Printf("the root is %f\n", root)
	default: fmt.Println("error")
	
}

}
func main(){
	var n int32
	var ans string
	fmt.Println("1. calculate area of rectangle")
	fmt.Println("2. calculate area of circle")	
	fmt.Println("3. calculate root of first degree of polynomail")
	fmt.Printf("Please, choose one of them: ")
	fmt.Scanf("%d", &n)
	for  {
		f_switch(n)
		fmt.Printf("Do you want to choose again? (yes/no): ")
		fmt.Scanf("%s", &ans)
		if ans == "yes" || ans == "y"{
		
		} else {fmt.Println("bye bye!");break}
	}
}