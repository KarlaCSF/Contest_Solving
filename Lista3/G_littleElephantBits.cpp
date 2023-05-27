#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void solve() {
  int hits = 0, miss = 0;
  string solution, guess;
  int letters[26] = {0};
  
  cin >> solution >> guess;

  for (auto c : guess) {
    if(letters[c - 97] != -1) {
      int cont = count(solution.begin(), solution.end(), c);
      cont > 0 ? hits += cont : miss++;
      letters[c - 97] = -1;
    }

    if (miss >= 7) {
      cout << "You lose." << endl;
      return;
    } else if (hits == solution.length()) {
      cout << "You win." << endl;
      return;
    }
  }

  cout << "You chickened out." << endl;
}

int main() {
  long long round;

  while (1) {
    cin >> round;

    if (round == -1)
      break;

    cout << "Round " << round << endl;
    solve();
  }

  return 0;
}