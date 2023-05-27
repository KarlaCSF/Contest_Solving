#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const string digits {"0123456789"};

string representation(int n, int b) {
  string rep;

  do {
    rep.push_back(digits[n%b]);
    n /= b;
  } while (n);

  reverse(rep.begin(), rep.end());
  
  return rep;
}

int main(){

  while(1) {
    int n;
    cin >> n;
    
    if(n < 0)
      break;

    cout << representation(n, 3) << endl;
  } 

  return 0;
}