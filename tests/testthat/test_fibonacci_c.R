library(FibonacciPackage)

test_that("the result is correct",{
  n <- sample(c(3:40), size = 10)
  for (x in n) {
    expect_equal(fibonacci_c(x), fibonacci(x))
  }
})

