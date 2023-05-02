#include <iostream>
using namespace std;

#define MAX 10
int hashTb[MAX + 1];
int ans = 0;

void insertHash(int n) {
  int hash = n % MAX;

  while(1) {
    if(hashTb[hash] == n) {
      ans++;
      return;  
    }
    if(hashTb[hash] == 0) {
      hashTb[hash] = n;
      return;
    }
    else
      hash++;
  }
}

int main() {
  int n = 4, s;
  
  for(int i = 0; i < n; i++) {
    cin >> s;
    insertHash(s);
  }

  cout << ans << endl;

  return 0;
}