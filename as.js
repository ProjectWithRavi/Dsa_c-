// var expect = function(val) {
//     return {
//         toBe:function(m){
//             if(val===m){
//                 return true
//             }else{
//                 throw new Error("Not Equal")
//             }
//         },
//         notToBe:function(n){
//             if(n!==val){
//                 return true
//             }else{
//                 throw new Error("Equal")
//             }
//         }
//     }
    
// };

// let getvalue = expect(5).toBe(5)
// console.log(getvalue)



// -----------------------------------
// var createCounter = function(init) {
//     let a = init
//     return {
//         increment:function(){
//             return ++init;
//         },
//         decrement:function(){
//             return --init;
//         },
//         reset:function(){
//             return init=a;

//         },
//     }
// };

// let getfun = createCounter(5)
// console.log(getfun.increment())
// console.log(getfun.decrement())
// console.log(getfun.reset())


// ---------------------------------------------
var map = function(arr, fn) {
    let narr = []
    for(let i=0; i<arr.length; i++){
        if(fn(arr[i],i)){
            let a = arr[i]
            narr.push(a)
        }
    }
    return narr
    
};
function greaterThan10(num) {
    return num>10 ;
  }

function firstIndex(n,i) {
    return i===0;
  }

function plusOne(n) {
    return n+1;
  }

  
const numbers = [1,2,3];
console.log(map(numbers,firstIndex))
// const newArr = numbers.map(myFunction);
// console.log(newArr)


