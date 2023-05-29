#include <iostream>
using namespace std;

bool is_prime(int n) {
  if(n < 2)
    return false;

  if(n == 2)
    return true;

  if(n % 2 == 0)
    return false;

  for(int i = 3; i * i <= n; i += 2)
    if(n % i == 0)
      return false;

  return true;
}

int main() {
  int x; cin >> x;

  do {
    if(is_prime(x))
      break;
  } while(x++);

  cout << x << endl;
}