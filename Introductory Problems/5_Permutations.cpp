// [Permutations]
// [24/10/2025] [19:26 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  if(n == 1) cout << 1 << nn;
  else if(n >= 4){
    for(int i = 2; i <= n; i += 2) cout << i << " ";
    for(int i = 1; i <= n; i += 2) cout << i << " ";
  }else cout << "NO SOLUTION" << nn;
}
