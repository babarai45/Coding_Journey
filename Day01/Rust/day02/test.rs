use std::io;
fn main(){
    let mut name = String::new();
    println!("Enter your Name Please!");
    io::stdin()
        .read_line(&mut name)
        .expect("failed to read input as name ");
    println!("Well Come {}",name.trim());
}