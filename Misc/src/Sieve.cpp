#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>
#include <string.h>

using std::vector;


void sieve(const int n) {
  if (n < 2) return;

  bool primes[n+1];
  memset(&primes, true, sizeof(primes));

  for(int i=2; i<sqrt(n); ++i) {
    if (primes[i]) {
      for(int j = i*i; j<=n; j+=i)
        primes[j] = false;        
    }
  }
  std::cout << "The prime numbers below " << n << " are: "; 
  for(int i=2; i<n+1; i++) {
    if(primes[i])
      std::cout << (i) << " ";
  }
  std::cout << std::endl;
}

bool isPrime(const int n) {
  if(n <= 1) return false;
  else if(n<=3) return true;
  else if(n % 2 == 0 || n % 3 == 0) return false;
  int i = 5;
  while(i*i <= n) {
    if(n % i == 0 || n % (i + 2) == 0) return false;
    i += 6;
  }
  return true;
}


