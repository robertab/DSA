#include <vector>

using std::vector;

const int dynFib(const int n) {
  if (n <= 1) return n;
  vector<int> fn(n+1);
  fn[0] = fn[1] = 1;
  for(int i=2; i<=n; i++) {
    fn[i] = fn[i-1] + fn[i-2];
  }
  return fn[n];
}

const int fib(const int n) {
  if(n == 0) return 0;
  else if(n == 1) return 1;
  else return fib(n-1) + fib(n-2);
}

