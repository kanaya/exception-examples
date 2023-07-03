fn divide(y: f64, x: f64) -> Option<f64> {
    if x == 0.0 {
        None
    } else {
        Some(y/x)
    }
}

fn main () {
    let x = 0.0;
    let y = 2.0;
    let z = divide(y, x);

    match z {
        Some(x) => println!("Result: {x}"),
        None    => println!("Divide by zero"),
    }
}
