mod print;
mod vars;
mod types;
mod constant;
mod shadowing;
mod functions;
mod conditionals_if;
mod loops;

fn main() {
    println!("Hello World!");
    print::run();
    vars::run();
    types::run();
    constant::run();
    shadowing::run();
    functions::run();
    functions::run();
    conditionals_if::run();
    conditionals_if::if_let();
    loops::run();
}
