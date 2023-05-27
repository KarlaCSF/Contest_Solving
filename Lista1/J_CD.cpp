#include <iostream>
using namespace std;

int buscaBinaria(int arr[], int l, int r, int x) {
  if(l > r) return 0;
  
  int mid = (r + l) / 2;

  if(x ==  arr[mid]) return 1;

  if(x < arr[mid]) return buscaBinaria(arr, l, mid - 1, x);
  else return buscaBinaria(arr, mid + 1, r, x);
}

int main() {
  while(1) {
    int n, m, cd, arr[1000000] = {}, ans = 0;
    
    cin >> n >> m;
    if(n == 0 && m == 0) break;

    for(int i = 0; i < n; i++) 
      cin >> arr[i];
  
    for(int i = 0; i < m; i++) {
      cin >> cd;
      ans += buscaBinaria(arr, 0, n - 1, cd);
    }
    
    cout << ans << endl;
  }
}