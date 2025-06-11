// use std::io::{self,Write};
// 
// fn main() {
//     let mut name = String::new();
//     println!("Enter your name please !");
//     io::stdin()
//         .read_line(&mut name)
//         .expect("Failed to read input ");
//     println!("Welcome {}", name.trim());
// 
//     let mut age_input = String::new();
//     println!("Enter your Age");
//     io::stdin()
//         .read_line(&mut age_input)
//         .expect("failed to read input");
//     
//     let age: f64 = age_input.trim().parse()
//         .expect("Please enter a valid number");
//     
//     println!("your age is {}", age);
//     
//     let  first_name = read_alpha_string("Enter your First Name ");
//     let  last_name = read_alpha_string("Enter your Last Name ");
// 
//     println!("\n--- User Information ---");
//     println!("First Name   : {}", first_name);
//     println!("Last Name    : {}", last_name);
// }
// fn read_alpha_string(prompt: &str) -> String {
//     loop {
//         print!("{} ", prompt);
//         io::stdout().flush().unwrap();
// 
//         let mut input = String::new();
//         io::stdin().read_line(&mut input).unwrap();
//         let trimmed = input.trim();
// 
//         if !trimmed.is_empty() && trimmed.chars().all(|c| c.is_alphabetic() || c == ' ') {
//             return trimmed.to_string();
//         } else {
//             println!("Invalid input. Please enter only letters.");
//         }
//     }
// }


// concepts of shadowed in rust 
fn main() {
    let x =5;
    let x = x+1;  // shadowed 
    let x ="Babar"; // again shadowed also changed types 
    {
        let x="Umair";
        println!("i m from inside shadowed and now x is {}",x);
    }
    println!("now x is {}",x);
}