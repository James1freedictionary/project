
let rl = require("readline")
let nam: string
let age: number
let r1 = rl.createInterface({
     input: process.stdin,
     output: process.stdout
})
function p1(){
return new Promise((res,rej)=>{
r1.question("enter your name: " ,(ans) =>{
    nam = ans
 
res("")
}
)
})}

function  p2()
{
    return new Promise((res,rej) => {
    r1.question("enter age: ", (ans) =>
    {
        age = ans
        r1.close()
        res("")
    })
})}

async function main(){
    await p1()
    await p2()
   console.log( `you are ${nam}`)
   console.log(`you are ${age}`)
}
main()