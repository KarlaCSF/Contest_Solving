#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

long long mostSigBit(long long n) {
  long long msb = 0;
  while (n >>= 1)
    msb++;

  return pow(2, msb);
}

int main() {
  long long N, K, X = 0;

  cin >> N >> K;
  vector<long long> A; 

  for (int i = 0; i < N; i++) {
    long long in;
    cin >> in;
    A.push_back(in);
  }

  long long mask = mostSigBit(K);

  while (mask) {
    int t = 0, f = 0;
    for (auto a : A)
      a & mask ? t++ : f++;

    if (f > t && (X | mask) <= K)
      X |= mask;

    mask >>= 1;
  }

  long long ans = 0;
  for (auto a : A) {
    ans += X ^ a;
  }

  cout << ans << endl;

  return 0;
}