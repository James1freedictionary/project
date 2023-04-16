require "readline"
class Product
    def Product()
    def speak(arg)
        puts "i speak #{arg}"
    end
end
puts "1. calculate area of rectangle"
puts "2. calculate area of circle"
puts "3. insert product"
n = Readline.readline("please, choose one of them: ")

case n
when '1'  
    a= Readline.readline("Enter a: ")
    b= Readline.readline("Enter b: ")
    area = a * b
    puts "the area is #{a}"
when "2" 
    r= Readline.readline("Enter r")
    area = (Math::PI)* r.to_i*r.to_i
    puts "the area is #{area}"
  
when "3"
    id = Readline.readline("Enter id: ")
    name = Readline.readline("Enter name ")
    price = Readline.readline("Enter price: ")
else puts "error"
end