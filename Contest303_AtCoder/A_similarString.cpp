#include <iostream>

using namespace std;

int main() {
    int n;
    string s, t;
    
    cin >> n >> s >> t;
    
    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1' || s[i] == 'l') {
            if(t[i] != '1' && t[i] != 'l')
                ans = false;
        }
        else if(s[i] == '0' || s[i] == 'o') {
            if(t[i] != '0' && t[i] != 'o')
                ans = false;
        }
        else if(s[i] != t[i])
            ans = false;
    }

    ans ? cout << "Yes" : cout << "No";
    cout << endl;
    
}