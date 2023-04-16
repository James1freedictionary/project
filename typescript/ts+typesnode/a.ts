// asynchronous callback
/*function callback(){
    console.log("---starting---")
    setTimeout(()=> {console.log("this is completed")},2000)
    console.log("this is done!")
}
callback()*/
// promise
/*let p = new Promise((resolve,reject)=>{
    let a: number = 1
    let b: number = 2
    console.log("this a first")
    if (a===b){
    resolve("done")}
    else {
        reject("error")
    }

})
p.then(val => console.log(val)).catch((err) => console.log(err)).finally(()=> console.log("done!"))
console.log("second")*/
//async/await
const pr:Promise<unknown> = new Promise((res,rej)=>{
  
    setTimeout(()=> res("hi"), 100)
})
 async function do1(){
    let x = await pr
    console.log(x)
 
}
do1()

  