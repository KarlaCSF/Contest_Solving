#include <iostream>
#include <math.h>

using namespace std;

int count_bits(long long int n) {
  int count = 0;

  while(n) {
    count++;
    n >>= 1;
  }

  return count;
}

int main() {
  long long int l, r, ans;

  cin >> l >> r;

  long long int xorLR = l^r;
  
  int ansBit = count_bits(xorLR);
  ans = pow(2, ansBit) - 1;
  
  cout << ans << endl;
}