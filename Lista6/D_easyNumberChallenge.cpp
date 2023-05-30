#include <iostream>
using namespace std;
using ll = long long;

ll divisors(int n) {
    ll div = 0;
    for (int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            if(n / i == i)
                div++;
            else
                div += 2;
        }
    }
    
    return div;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    ll sum = 0;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                ll d = i * j * k;
                sum += divisors(d);
            }
        }
    }

    cout << sum << endl;
}