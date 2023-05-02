#include <iostream>
using namespace std;

int main() {
  string str;
  char alf[26] = {};
  int count = 0;
  
  cin >> str;
  
  for(int i = 0; i < str.size(); i++) {
    int c = (int)str[i];
        
    if(alf[c - 97] == 0) {
      count++;
      alf[c - 97] = 1;  
    }
  }

  string ans = (count % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!";

  cout << ans << endl;
}