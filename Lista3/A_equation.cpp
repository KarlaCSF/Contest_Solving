#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double a, b, c;

  cin >> a >> b >> c;

  double delta = b * b - 4 * a * c;

  if(a == 0 && b == 0 && c == 0)
    cout << -1 << endl;
  else if((a == 0 && b == 0) || delta < 0)
    cout << 0 << endl;
  else if (a == 0) {
    cout << 1 << endl;
    cout << fixed << setprecision(5) << -c / b << endl;
  }
  else if (delta == 0) {
    cout << 1 << endl;
    cout << fixed << setprecision(5) << -b / (2 * a) << endl;
  } 
  else {
    cout << 2 << endl;
    double x1 = (-b - sqrt(delta)) / (2 * a);
    double x2 = (-b + sqrt(delta)) / (2 * a);

    x1 < x2 ?
    cout << fixed << setprecision(5) << x1 << endl << x2 << endl : 
    cout << fixed << setprecision(5) << x2 << endl << x1 << endl;
  }
}