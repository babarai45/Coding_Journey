// Q1 write a program to print Hello Student on the screen
// fn main() {
//     println!("Hello Students!");
// }

// Q2 write a program to print Hello on first line and Student on second line
// fn main() {
//     println!("Hello \nworld!");
// }

//
// // Q3  write a program to print "Muhammad Babar" as same in double quotes
// fn main() {
//     println!("\"Muhammad Babar\"");
// }
// // Q4  write a program to print "\n" on screen
// fn main() {
//     println!("/n ");
//     println!("/t ");
//     println!(" ");
// }

// // Q5  write a program to print sum of two integers make sure take input from user

// fn main() {
//     let a=5;
//     let b=3;
//     println!("sum of a and b: {}",a+b);
// }

// // Q6  write a program to calculate square of user entered number
//
// use std::io::stdin;
// fn main() {
//     println!("Enter a Number ");
//     let mut input = String::new();
//     stdin().read_line(&mut input).expect("invalid input");
//     let input: i32 = input.trim().parse().expect("invalid input");
//     println!(" squere root of  {:?}", input * input);
// }

// // // Q8 write a program to take input from user and print area
// // //
// use ::std::io::stdin;
// fn main() {
//     println!("Enter width of Aera:");
//     let mut width = String::new();
//     stdin().read_line(&mut width).expect("enter correct witdh");
//     let width: i32 = width.trim().parse().expect("invalid input");

//     println!("Enter hight of Area");
//     let mut hight = String::new();
//     stdin().read_line(&mut hight).expect("enter correct hight ");
//     let hight: i32 = hight.trim().parse().expect("enter vailid input");

//     println!("The Aera of given input is {:?}", width *hight);
// }

// // // Q 8 write a program to print Your Name Age and your city using println
//
// fn main() {
//     println!(
//         "My name is {} , Age is {} , and my city is {}",
//         "Muhammad Babar", 22, "Lahore "
//     );
// }

// // Q9 Take two numbers and print them after swapping (without using 3rd variable — try logic later).
//

// fn main() {
//     let mut a = 5;
//     let mut b = 3;
//     println!("Before swapping a is {} and b is {}", a, b);

//     let a = a + b;
//     let b = a - b;
//     let a = a - b;
// //     println!("After swapping a is {} and b is {}", a, b);
// }

// 10 Take a large float and print in scientific format using %e
// use std::io::stdin;
// fn main() {
//     println!("Enter double or large flot numner ");
//     let mut number = String::new();
//     stdin().read_line(&mut number).expect("put vailid ");
//     let number: f64 = number.trim().parse().expect("parse");
//     println!("your number is {:e}",number);
//     println!("your number is {:E}",number);
//     println!("your number is {:.5e}",number);
//     println!("your number is {:.5E}",number);
// }

// // Q 11  Take user input and convert into decimal,octal,decimal
use std::io::stdin;
fn main() {
    println!("Enter a Number");
    let mut n = String::new();
    stdin().read_line(&mut n).expect("read");
    let n: u32 = n.trim().parse().expect("parse");
    println!("The Number in Binary formate is  {:b}",n );
    println!("The Number in Decimal formate is  {}",n );
    println!("The Number in octal formate is  {:o}",n );
    println!("The Number in Hexdecimal formate is {:x}",n );
    println!("The Number in Hexdecimal  i Capital formate is {:X}",n );
}