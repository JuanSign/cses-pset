// [Bit Strings]
// [24/10/2025] [19:43 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n; cin >> n;
  long long mod = 1e9+7;
  long long ans = 1;
  long long cur = 2;
  while(n > 0){
    if(n&1){
      ans = (ans*cur)%mod;
    }
    cur = (cur*cur)%mod;
    n >>= 1;
  }
  cout << ans << nn;
}
