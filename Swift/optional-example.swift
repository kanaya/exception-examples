func divide(y: Float, x: Float) -> Float? {
    return x != 0.0 ? y/x : nil
}
let x: Float = 0.0
let y: Float = 2.0
var z = divide(y: y, x: x)
print(z)
