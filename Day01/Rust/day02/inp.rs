// how take input from the user in Rust by comparing with c language 
// In Rust, you can take input from the user using the `std::io` module, which provides functionality for reading input from standard input (stdin). Here's how you can do it:

// Method 1: Using `std::io` for basic input


// use std::io::stdin; // Import the stdin module for input operations

// fn main() { // Main function to start the program
//     let mut fname = String::new(); // Create a mutable variable to store the input as a String
//     let mut lname = String::new(); // Create another mutable variable for last name
//     let mut age = String::new(); // Create a mutable variable to store the age as a String
//     let mut city = String::new(); // Create a mutable variable to store the city as a String
//     let mut country = String::new(); // Create a mutable variable to store the country as a String

//     println!("Enter your first name:"); // Prompt the user for first name input
//     stdin().read_line(&mut fname).expect("Failed to read line"); // Read a line from standard input and store it in the fname variable
//     println!("Enter your last name:"); // Prompt the user for last name input
//     stdin().read_line(&mut lname).expect("Failed to read line"); // Read a line from standard input and store it in the lname variable
//     println!("Enter your age:"); // Prompt the user for age input
//     stdin().read_line(&mut age).expect("Failed to read line"); // Read a line from standard input and store it in the age variable
//     println!("Enter your city:"); // Prompt the user for city input 
//     stdin().read_line(&mut city).expect("Failed to read line"); // Read a line from standard input and store it in the city variable
//     println!("Enter your country:"); // Prompt the user for country input
//     stdin().read_line(&mut country).expect("Failed to read line"); // Read a line from standard input and store it in the country variable
//     // Print a greeting message with the input details
//     println!("Hello, {} {}! You are {} years old, live in {}, and are from {}.", 
//              fname.trim(), lname.trim(), age.trim(), city.trim(), country.trim());
//     // trim() is used to remove any trailing newline characters from the input

// }

// Method 2: Using `std::io` with error handling and type conversion

use std::io::{self, Write}; // Import the io module and Write trait for input/output operations
use std::str::FromStr; // Import FromStr trait for string to type conversion
fn main() { // Main function to start the program
    let mut fname = String::new(); // Create a mutable variable to store the first name
    let mut lname = String::new(); // Create a mutable variable to store the last name
    let mut age = String::new(); // Create a mutable variable to store the age
    let mut city = String::new(); // Create a mutable variable to store the city
    let mut country = String::new(); // Create a mutable variable to store the country

    print!("Enter your first name: "); // Prompt the user for first name input
    io::stdout().flush().unwrap(); // Flush the output buffer to ensure prompt is displayed immediately
    io::stdin().read_line(&mut fname).expect("Failed to read line"); // Read first name input

    print!("Enter your last name: "); // Prompt for last name input
    io::stdout().flush().unwrap(); // Flush output buffer
    io::stdin().read_line(&mut lname).expect("Failed to read line"); // Read last name input

    print!("Enter your age: "); // Prompt for age input
    io::stdout().flush().unwrap(); // Flush output buffer
    io::stdin().read_line(&mut age).expect("Failed to read line"); // Read age input

    print!("Enter your city: "); // Prompt for city input
    io::stdout().flush().unwrap(); // Flush output buffer
    io::stdin().read_line(&mut city).expect("Failed to read line"); // Read city input

    print!("Enter your country: "); // Prompt for country input
    io::stdout().flush().unwrap(); // Flush output buffer
    io::stdin().read_line(&mut country).expect("Failed to read line"); // Read country input

    // Convert age from String to u32 and handle potential errors
    let age: u32 = match u32::from_str(age.trim()) {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Invalid age entered. Please enter a valid number.");
            return; // Exit the program if age is invalid
        }
    };

    // Print a greeting message with the input details
    println!("Hello, {} {}! You are {} years old, live in {}, and are from {}.", 
             fname.trim(), lname.trim(), age, city.trim(), country.trim
());
}

// this output will be like this but if we enter invalid input for age it will give error but if i give invalid input for fname or lname or city or country it will not give error because they are string type
// Enter your first name: babar
// Enter your last name: ali
// Enter your age: 34
// Enter your city: 90
// Enter your country: ,.l;;
// Hello, babar ali! You are 34 years old, live in 90, and are from ,.l;;.

