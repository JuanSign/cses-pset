// [Weird Algorithm]
// [24/10/2025] [18:50 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long int n; cin >> n;
  while(n != 1){
    cout << n << " ";
    n = (n%2)? 3*n+1 : n/2;
  }
  cout << 1 << nn;
}
