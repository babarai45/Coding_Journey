fn main() {
    println!("Hello World");
    // it is single line comments
    /* it is multi line comment method
    here "println!" is not pre-define function it is macro
    whenever you see in your code with "!" exclamation symbols or signe
    so it is macro and its is also called metaprogramming

    */
    print!("hello ");
    // println!(12);  //  Wrong
    // print!(10);    // Wrong
    //     correct way is
    println!("{}", 10);
    print!("{}", 20); // here {} is called placeholder

    println!(" ");
    println!(" ");
    println!(" ");
    println!(" ");
    print!("Hello World\n"); // correc
                             // we can also add escape sequence like above
    println!("------------------ ");

    println!("My Fname is {} and my Lname is {}", "Muhammad ", "Babar");
    // here is first placeholder hold first string and second placeholder is hold second sting

    println!("doing {2} work is {1} your {0}", "life", "success", "hard");
    //  we can set by custom placeholder index  by defaults it is start from 0

    println!("doing something works is {great}!", great = "good habit");
    // we also use by class or id name

    println!("always think {} ", true);

    // placeholder also can hold operation statement answers like below

    println!("sum of 2+4 is {}", 2 + 4);
    println!("sum of 2+4 is {}", 2 * (2 + 4));
    println!("These are called strings formates ");

    //     these are also called string formating like in python
}
