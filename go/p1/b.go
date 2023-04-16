package main
import "fmt"

func ch(a int,b int,c chan int){
	c <- a -b
}
func main(){
	
	c := make(chan int)
	go ch(1,2,c)
	i := <-c
	fmt.Println(i)

}