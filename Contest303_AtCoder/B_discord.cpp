#include <iostream>
using namespace std;

int main() {
    int n, m, a, NM[60][60] = {0}, ans = 0;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a;

        for (int j = 1; j < n; j++) {
            int a1;
            cin >> a1;

            NM[a][a1] = 1;
            NM[a1][a] = 1;
            
            a = a1;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // cout << i << j << endl;
            if(i != j && NM[i][j] != 1)
                ans++;
        }
    }

    cout << ans / 2 << endl;
}