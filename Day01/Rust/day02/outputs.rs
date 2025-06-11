// there different ways to print the output in rust

// and aslo there are types of outputs 
// 1. Standard Output
// 2. Standard Error
// 3. File Output


fn main(){

    // standard output by macro
    println!("Hello, World!"); // prints to standard output
    println!("This is a {} example.", "Rust"); // formatted output
    println!("The value of pi is approximately {:.2}.", 3.14159); // formatted with precision
    println!("{} + {} = {}", 5, 3, 5 + 3); // arithmetic operation in output
    println!("{} is a {} language.", "Rust", "systems programming"); // string interpolation
    println!("{} is {} years old.", "Alice", 30); // variable interpolation
    println!("The answer is: {}", 42); // simple output
    println!("{} + {} = {}", 10, 20, 10 + 20); // addition in output
    println!("{} - {} = {}", 10, 5, 10 - 5); // subtraction in output
    println!("{} * {} = {}", 4, 5, 4 * 5); // multiplication in output
    println!("{} / {} = {}", 20, 4, 20 / 4); // division in output
    println!("{} % {} = {}", 10, 3, 10 % 3); // modulus in output
    println!("{} is a {} programming language.", "Rust", "modern"); // string interpolation with description
    println!("The value of e is approximately {:.3}.", 2.718); // formatted output with precision
    println!("{} is a {} language.", "Rust", "compiled"); // string interpolation with type


    println!("---------------------------------------");
    println!(""); // prints a new line
    

    // standarderror output by macro
    eprintln!("This is an error message!"); // prints to standard error
    eprintln!("Error: {} not found.", "file.txt"); // formatted error message
    eprintln!("Warning: {} is deprecated.", "old_function"); // warning message
    eprintln!("{} is not a valid input.", "abc"); // invalid input error
    eprintln!("{} is out of range.", 100); // out of range error
    eprintln!("{} is not a number.", "NaN"); // not a number error
    eprintln!("{} is not a valid option.", "option1"); // invalid option error

    eprint!("This is a message without a newline"); // prints to standard error without a newline
    eprint!("This is a message with a newline\n"); // prints to standard error with a newline


    // calling the function to write to standard output
    write_to_stdout().expect("Failed to write to stdout"); // handle the result of the function call

}

// using the `std::io`
use std::io::{self, Write}; 

// use is just like import in other languages for importing modules its keyword in rust 

// std is the standard library in rust
// io is the input/output module in rust

// :: is the namespace operator in rust like . in python or javascript {list.append()}

// self is used to refer to the current module like this module in this case 
// Write is a trait in rust that provides methods for writing to a stream trait(like interface in other languages)
// streams are like pipes in rust that can be used to write data to a file or standard output



// Example of writing to standard output using `std::io`
fn write_to_stdout() -> io::Result<()> {
    let mut stdout = io::stdout(); // get the standard output handle
    writeln!(stdout, "Hello, World!")?; // write a line to standard output
    writeln!(stdout, "This is a {} example.", "Rust")?; // formatted output
    Ok(())
}