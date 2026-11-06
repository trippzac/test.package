#include <Rcpp.h>
using namespace Rcpp;

NumericVector cube(NumericVector x){
  return x * x * x;
}
