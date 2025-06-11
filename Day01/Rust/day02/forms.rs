use std::io::{self, Write};

fn main() {
    let first_name = read_alpha_string("Enter your first name:");
    let last_name = read_alpha_string("Enter your last name:");
    let age = read_integer("Enter your age:");
    let phone_number = read_phone("Enter your phone number (digits only):");
    let city = read_alpha_string("Enter your city:");

    println!("\n--- User Information ---");
    println!("First Name   : {}", first_name);
    println!("Last Name    : {}", last_name);
    println!("Age          : {}", age);
    println!("Phone Number : {}", phone_number);
    println!("City         : {}", city);
}

// Reads and validates alphabetic string input (e.g. name, city)
fn read_alpha_string(prompt: &str) -> String {
    loop {
        print!("{} ", prompt);
        io::stdout().flush().unwrap();

        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();
        let trimmed = input.trim();

        if !trimmed.is_empty() && trimmed.chars().all(|c| c.is_alphabetic() || c == ' ') {
            return trimmed.to_string();
        } else {
            println!("Invalid input. Please enter only letters.");
        }
    }
}

// Reads and validates an integer (i32)
fn read_integer(prompt: &str) -> i32 {
    loop {
        print!("{} ", prompt);
        io::stdout().flush().unwrap();

        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();

        match input.trim().parse::<i32>() {
            Ok(num) => return num,
            Err(_) => println!("Invalid number. Please enter a valid integer."),
        }
    }
}

// Reads and validates a phone number (digits only, at least 7 digits)
fn read_phone(prompt: &str) -> String {
    loop {
        print!("{} ", prompt);
        io::stdout().flush().unwrap();

        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();
        let trimmed = input.trim();

        if trimmed.chars().all(|c| c.is_ascii_digit()) && trimmed.len() >= 7 {
            return trimmed.to_string();
        } else {
            println!("Invalid phone number. Please enter digits only (at least 7 digits).");
        }
    }
}
