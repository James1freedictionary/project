use std::io::{stdin,stdout};
use std::io::Write;
use std::any::type_name;
use std::str;
use std::f32::consts::PI;


fn ptype<T>(_arg: T){
    let t = type_name::<T>();
    println!("{}",t);
}
fn to_num<T: str::FromStr>(arg: String) -> T where <T as str::FromStr>::Err:std::fmt::Debug
{
    arg.trim().parse::<T>().unwrap()
}
fn f_match(num: &String){
        match  num {
         num if num.trim() == "1" =>  {
            let mut a = String::new();
            let mut b = String::new();
            print!("Enter a: ");stdout().flush();
            stdin().read_line(&mut a);
            let  a = to_num::<f32>(a);
            print!("Enter b: ");stdout().flush();
            stdin().read_line(&mut b);
            let  b = to_num::<f32>(b);
            let area = a*b;
            println!("The area is {}", area);

                    
        }
          num if num.trim() == "2" =>{
            let mut r = String::new();
            print!("Enter r: ");stdout().flush();
            stdin().read_line(&mut r);
            let r = to_num::<f32>(r);
            let area = PI*(r.powf(2.0));
            println!("The area is {}", area);
               
        }
          num if num.trim() == "3" =>{
            let mut a = String::new();
            let mut b = String::new();
            print!("Enter a: ");stdout().flush();
            stdin().read_line(&mut a);
            let  a = to_num::<f32>(a);
            print!("Enter b: ");stdout().flush();
            stdin().read_line(&mut b);
            let  b = to_num::<f32>(b);
            let root = (-b)/a;
            println!("The root is {}",root );

        }
       

        
        _ => println!("error"),
    }
    
    
   
  
}
fn main(){
 
    
    loop{
    println!("1. calculate area of rectangle");
    println!("2. calculate area of circle");
    println!("3. calculate root of first degree of polynomial");
    let mut num = String::new();
    print!("Please, choose one of them:");
    stdout().flush();
    stdin().read_line(&mut num);
    //assert_eq!(num.trim(), String::from("1"));
    f_match(&num);
    let mut ans = String::new();
    print!("Do you choose again? (yes/no)");stdout().flush();
    stdin().read_line(&mut ans);

    if ans.trim() == "yes" || ans.trim() == "y"{

    } else {println!("bye bye!"); break;}
    
    }
 

}