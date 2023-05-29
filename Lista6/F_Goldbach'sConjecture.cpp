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
  while(true) {
    int n; cin >> n;

    if(n == 0)
      break;
    
    int x, y;
    
    for(int i = 3; ;i+= 2) {
      if(is_prime(i)) {
        if(is_prime(n - i)) {
          x = i;
          y = n - i;
          break;
        }
      }
    }
    cout << n << " = " << x << " + " << y << endl;
  }
}