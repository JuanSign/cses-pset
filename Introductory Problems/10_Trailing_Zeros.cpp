// [Trailing Zeros]
// [24/10/2025] [19:44 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int solve(int n){
  if(n == 0) return 0;
  else return n/5 + solve(n/5);
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cout << solve(n) << nn;
}
