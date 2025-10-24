// [Number Spiral]
// [24/10/2025] [19:38 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while(t--){
    int r, c; cin >> r >> c;
    int index = max(r,c);

    long long maks = (1LL)*index*index;
    long long mins = maks-2*(index-1);

    if(index%2){
      if(index == c) cout << maks-(r-1) << nn;
      else cout << mins+(c-1) << nn;
    }else{
      if(index == c) cout  << mins+(r-1) << nn;
      else cout << maks-(c-1) << nn;
    }
  }
}
