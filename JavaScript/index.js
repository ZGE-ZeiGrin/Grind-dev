// Day 1: Learning JavaScript
// console.log("Hello");
// console.log("I like Rice");

// window.alert("This is an alert");

// document.getElementById("myH1").textContent = 'hello';
// document.getElementById("myP").textContent = 'I like Game';

// Variables

// let x;
// x = 100;

// let age = 25;
// let price = 23.000;
// let gpa = 2.1;
// let firstName = "Bro";

// console.log(x);
// console.log('You are ${age} years old');
// console.log('The price is $${price}');
// console.log('Your gpa is: ${gpa}');

// console.log(typeof firstName);
// console.log('You name is ${firstName}');

// Day 2: Learning JavaScript

// let online = true;
// let forSale = false;
// let isStudent = true;

// console.log(`Bro is online: ${online}`);
// console.log(`Is this car for sale: ${forSale}`);
// console.log(`Enrolled: ${isStudent}`);

// let fullName = "ZeiGrin";
// let age = 25;
// let isStudent = false;

// document.getElementById("p1").textContent = `Your name is ${fullName}`;
// document.getElementById("p2").textContent = `You are ${age} years old`;
// document.getElementById("p3").textContent = `Enrolled: ${isStudent}`;

// Arithmetic operators

// let students = 30;

// students = students + 1;
// students = students - 1;
// students = students * 2;
// students = students / 2;
// students = students ** 2;
// let extraStudents = students % 2;

// students += 1;
// students -= 1;
// students *= 2;
// students /= 2;
// students **= 2;
// students %=2;

// students++;
// students--;

// console.log(students);

// let result = 1 + 2 * 3 + 4 ** 2;
// let result = 6 / 2 ** 7;

// console.log(result);

// Accept user input

// let username;

// username = window.prompt("What's your username");

// console.log(username);

// let username;

// document.getElementById("mySubmit").onclick = function(){
//     username = document.getElementById("myText").value;
//     document.getElementById("myH1").textContent = `Hello ${username}`;
// }

// Day 3: Learning Javascript
// Type conversion

// let age = window.prompt("How old are you?");
// age = Number(age);

// age+=1;

// console.log(age, typeof age);

// let x = "Sting";
// let y = "Coca cola";
// let z = "7up";


// let x = "0";
// let y = "0";
// let z = "0";


// let x = "";
// let y = "";
// let z = "";


// let x;
// let y;
// let z;


// x = Number(x);
// y = Number(y);
// z = Number(z);

// console.log(x, typeof x);
// console.log(y, typeof y);
// console.log(z, typeof z);

// Constants

// let pi = 3.14159;
// let PI = 3.14159;
// let radius;
// let cirumference;

// pi = 420.69;

// PI = 420.69;

// radius = window.prompt('Enter the radius of a circle');
// radius = Number(radius);

// cirumference = 2 * pi * radius;

const PI = 3.14169;
let radius;
let cirumference;

// console.log(cirumference);S

document.getElementById("mySubmit").onclick = function(){
    document.getElementById("myText").ariaValueMax;
    radius = Number(radius);
    cirumference = 2 * PI *radius;
    document.getElementById("h3").textContent = cirumference;
}