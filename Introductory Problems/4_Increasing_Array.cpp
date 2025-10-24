// [Increasing Array]
// [24/10/2025] [19:15 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<int> data(n);
  for(int& i : data) cin >> i;

  long long ans = 0;
  for(int i = 1; i < n; i++){
    if(data[i] < data[i-1]){
      ans += (data[i-1]-data[i]);
      data[i] = data[i-1];
    }
  }
  cout << ans << nn;
}
