library(Rcpp)

sourceCpp(code = "
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export(name = "prime factorisation")]]

NumericVector prime_factorisation(int n) {
  NumericVector factors;
  for (int i = 2; i <= n; i++) {
    while (n % i == 0) {
      factors.push_back(i);
      n = n / i;
    }
  }
  return factors;
}")

print(prime_factorisation(100))