from typing import Optional

def divide(y, x) -> Optional[float]:
    if x != 0.0:
        return y/x
    else:
        return None

x = 0.0
y = 2.0
z = divide(y, x)
print(z)
