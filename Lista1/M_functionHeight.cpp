#include <iostream>
using namespace std;

int main() {
  long long n, k, ans;

  cin >> n >> k;
  
  if(k <= n) 
    ans = 1;
  else 
    ans = k / n + (k % n != 0);     // ceil

  cout << ans << endl;
}