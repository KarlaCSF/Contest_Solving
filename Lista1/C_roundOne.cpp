#include <iostream>

using namespace std;

int main() {
  int A, B, ans;
  int options[3] = {1, 2, 3};

  cin >> A >> B;

  for (int i = 1; i <= 3; i++)
    if (A == i || B == i)
      options[i - 1] = -1;

  for (int i = 0; i < 3; i++)
    if (options[i] != -1)
      ans = options[i];

  cout << ans << endl;
}