#include <iostream>

using namespace std;

int main() {
  string s, ans = "";

  cin >> s;
  
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '0')
      ans.push_back('0');
    else if(s[i] == '1')
      ans.push_back('1');
    else if(!ans.empty())
      ans.pop_back();
  }

  cout << ans << endl;
}