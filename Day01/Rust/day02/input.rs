use::std::io::stdin;
fn main(){
    let mut fname = String::new();
    println!("Enter your name: ");
    stdin().read_line(&mut fname).expect("Failed to read line");
    let fname = fname.trim(); // Remove any trailing newline characters
    println!("Hello, {}!", fname); // Output the name entered by the user
    println!("Welcome to the Rust programming language!"); // Additional message
}
