// [Coin Piles]
// [24/10/2025] [19:53 GMT+07]
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
    int a, b; cin >> a >> b;
    if((2*b-a) < 0 || (2*a-b) < 0 || (2*b-a)%3 || (2*a-b)%3)
      cout << "NO" << nn;
    else cout << "YES" << nn;
  }
}
