#' Fibonacci sequence
#'
#' @param n A number
#'
#' @return The digit in the sequence
#' @export
#' @useDynLib FibonacciPackage
#' @importFrom Rcpp sourceCpp
#' @examples
#' fibonacci(5)
#' fibonacci(12)

fibonacci <- function(n) {
  # high speed
  if (n <= 1)
    return(FALSE)
  if (n == 1)
    return (1)
  if (n == 2)
    return (1)
  if (n >= 3){
    temp <- 0
    f1 <- 0
    f2 <- 1
    for (x in (3:n)) {
      temp <- f2
      f2 <- f1 + f2
      f1 <- temp
    }
    return(f2)
  }else
    return(0)

  # normal speed
  # if (n < 1)
  #   return(FALSE)
  # if (n == 1)
  #   return (1)
  # if (n == 2)
  #   return (1)
  # if (n >= 3)
  #   return(fibonacci(n - 1) + fibonacci(n - 2))
}
