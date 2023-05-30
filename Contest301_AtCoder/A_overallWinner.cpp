#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, t = 0, a = 0;
    char first;
    string s;

    cin >> n >> s;

    for (int i = 0; i < s.size(); i++) {
        s[i] == 'T' ? t++ : a++;
        if(t > a)
            first = 'T';
        else if(a > t)
            first = 'A';
        
        // cout << first << endl;
    }

    cout << first << endl;

    return 0;
}
