// 1. Ways to print in Javascript
// alert("Do you want to submit?");
document.write("This is document write");

// 2. Javascript Console API
console.log("Hello World", 8 + 6, "Another Log");
console.warn("This is a warning");
console.error("This is an error");

// 3. Javascript Variables - Containers to data values
var num1 = 40;
var num2 = 50;
// console.log(num1 +num2);

// 4. Data types in Javascript
var str1 = "This is a string";
var str2 = "This is also a string";
// console.log(str1 + str2);

var marks = {
    Tauhid: 30,
    Wasim: 90,
    Aditya: 40
}
// console.log(marks);

var a = true;
var b = false;
// console.log(a, b);

var und;
// console.log(und);

var n = null;
// console.log(n);

var arr = [1, 2, "Wasim", 4, 5];
// console.log(arr);
// console.log(arr[2]);

// 5. Operators in Javascript
var c = 10;
var d = 20;
// console.log("The value of a + b is ", c+d);

var e = c;
e += 2;
// console.log(e);

var x = 50;
var y = 60;
// console.log(x==y);
// console.log(x<=y);

// Logical AND

// console.log(true && true);
// console.log(true && false);
// console.log(false && true);
// console.log(false && false);

// // Logical OR

// console.log(true || true);
// console.log(true || false);
// console.log(false || true);
// console.log(false || false);

// Logical NOT

// console.log(!false);
// console.log(!true);

// Functions in JavaScript - DRY Function (Do Not Repeat)
function avg(a, b) {
    c = (a + b) / 2;
    return c;
}
c1 = avg(10, 20);
c2 = avg(30, 40);
// console.log(c1, c2);

// Conditions in JavaScript

var age = 6;
// if (age > 8){
//     console.log("You are not a Kid");
// }
// else {
//     console.log("You are a Kid");
// }

// if - else Ladder

// if (age > 30){
//     console.log("You can Marry");
// }
// else if (age > 25){
//     console.log("You should Marry");
// }
// else if (age > 20){
//     console.log("You cannot Marry");
// }
// else {
//     console.log("You are a Teenager");
// }

var arr = [1, 2, 3, 4, 5, 6, 7];
// for(var i=0;i<arr.length;i++){
//     console.log(arr[i]);
// }

//   OR

// arr.forEach(function (element) {
//     console.log(element);
// })

let j = 0;

// while Statement

// while(j<arr.length){
//     console.log(arr[j]);
//     j++;
// }

// do-while Statement

// do {
//     console.log(arr[j]);
//     j++;
// } while (j < arr.length);

// Break-Continue Statement

// for(var i=0;i<arr.length;i++){
//     if(i==2){
//         break;
//     }
//     console.log(arr[i]);
// }

// for(var i=0;i<arr.length;i++){
//     if(i==2){
//         continue;
//     }
//     console.log(arr[i]);
// }

let myArr = ["Fan", 34, null, true];

// Array Methods

// console.log(myArr.length);
myArr.shift();
myArr.unshift("Arif");
myArr.pop();
myArr.push("Wasim");
// console.log(myArr);

// String Methods

let myString = "Wasim is a good good good boy";
// console.log(myString.length);
// console.log(myString.indexOf("good"));
// console.log(myString.lastIndexOf("good"));
h = myString.replace("Wasim", "Ritam");
// console.log(h);

let myDate = new Date();
// console.log(myDate);
// console.log(myDate.getTime());
// console.log(myDate.getFullYear());
// console.log(myDate.getMonth());
// console.log(myDate.getHours());
// console.log(myDate.getMinutes());

// DOM Manipulation - Document Object Model

document.getElementById('click').style.border = '2px solid red';
let elem = document.getElementById('click');
// console.log(elem);
let elemClass = document.getElementsByClassName('container');
// console.log(elemClass);
elem.style.background = 'aqua';
elemClass[1].style.background = 'yellow';
elemClass[2].classList.add("bg-primary");
// elemClass[2].classList.remove("bg-primary");
// console.log(elemClass[0].innerHTML);
// console.log(elemClass[0].innerText);
let tags = document.getElementsByTagName('div');
// console.log(tags);
createdElem1 = document.createElement('h1');
createdElem1.innerText = "This is a created para";
tags[0].appendChild(createdElem1);

createdElem2 = document.createElement('b');
createdElem2.innerText = "This is a created bold";
tags[1].appendChild(createdElem2);

// Selecting using Query

sel = document.querySelector('.container');
// console.log(sel);
sel = document.querySelectorAll('.container');
// console.log(sel);

// Events in JavaScript

// function clicked() {
//     console.log("The button was clicked");
// }

// window.onload = function () {
//     console.log("The website fully loaded");
// }

// firstContainer.addEventListener('click', function(){
//     console.log("Clicked on Container");
// })

// firstContainer.addEventListener('mouseover', function(){
//     console.log("Mouse on Container");
// })
// firstContainer.addEventListener('mouseout', function(){
//     console.log("Mouse out Container");
// })
// firstContainer.addEventListener('mouseup', function(){
//     console.log("Mouse up when clicked on Container");
// })
// firstContainer.addEventListener('mousedown', function(){
//     console.log("Mouse down when clicked on Container");
// })

// firstContainer.addEventListener('click', function(){
//     document.querySelectorAll('.container')[2].innerHTML = "<b> We have clicked </b>"
//     console.log("Clicked on Container");
// })

// firstContainer.addEventListener('mouseover', function(){
//     document.querySelectorAll('.container')[2].innerHTML = "<b> We have mouse over </b>"
//     console.log("Mouse on Container");
// })

// Arrow Function

summ = (a,b) =>{
    return a+b;
}
// console.log(summ(2,3));

logKaro = () =>{
    document.querySelectorAll('.container')[2].innerHTML = "<b> Set time was fired </b>"
    console.log("Acoount was logged");
}

// SetTimeout and Setinterval Function

// clr1 = setTimeout(logKaro, 2000);
// clr2 = setInterval(logKaro, 2000);
// clearTimeout(clr1);
// clearInterval(clr2);

// Local Storage
localStorage.setItem('name', 'Wasim');
// localStorage.getItem('name');
// localStorage.removeItem('name');
// localStorage.clear();

// JSON - converts objects into strings, Only supports double quotes

obj = {name: "Wasim", length: 1, a:{"this": "that"}};
jso = JSON.stringify(obj);
// console.log(typeof jso);
// console.log(jso);

parsed = JSON.parse(`{"name":"Wasim","length":1,"a":{"this":"that"}}`)
// console.log(parsed);

// Template Literals - Backticks

i = 53;
console.log(`This is my number ${i}`);