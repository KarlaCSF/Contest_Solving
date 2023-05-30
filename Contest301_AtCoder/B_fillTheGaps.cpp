#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a1, a2;
    vector<int> A;

    vector<int> myvector;
    myvector.insert (myvector.begin(), 300);

    cin >> n >> a1;
    A.push_back(a1);
    
    for (int i = 1; i < n; i++) {
        cin >> a2;
        A.push_back(a2);

        if(abs(a1 - a2) > 1) 
            if(a1 < a2)
                for(int j = A.size() - 1; a1 < a2 - 1; j++) {
                    a1++;
                    A.insert(A.begin() + j, a1);
                }
            else
                for(int j = A.size() - 1; a1 > a2 + 1; j++) {
                    a1--;
                    A.insert(A.begin() + j, a1);
                }
        
        a1 = a2;
    }

    for(auto i : A)
        cout << i << ' ';

    cout << endl;
    
    return 0;
}