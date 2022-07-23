#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

//' @useDynLib FibonacciPackage
//' @importFrom Rcpp sourceCpp
// [[Rcpp::export]]
double fibonacci_c (const int x){
  // high speed
  double f1 = 0;
  double f2 = 1;
  int i = 0;
  double temp = 0;
  if(x < 1) return false;
  if(x == 1) return 1;
  if(x == 2) return 1;
  if(x >= 3){
    for(i = 3; i <= x; i++){
      temp = f2;
      f2 += f1;
      f1 = temp;
    }
    return f2;
  }else
    return 0;

  // if(x >= 3){
  //   return fibonacci_c(x - 1) + fibonacci_c(x - 2);
  // }else
  //   return 0;
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically
// run after the compilation.
//

/*** R

*/
