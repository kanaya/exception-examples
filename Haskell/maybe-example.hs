divide :: Float -> Float -> Maybe Float
divide y x | x /= 0.0  = Just (y/x)
           | otherwise = Nothing

x :: Float
x = 0.0

y :: Float
y = 2.0

main = print (divide y x)
