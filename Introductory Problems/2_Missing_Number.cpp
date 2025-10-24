// [Missing Number]
// [24/10/2025] [18:54 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<int> data(n-1);
  for(int& i : data) cin >> i;
  sort(data.begin(), data.end());

  for(int i = 0; i < n-1; i++)
    if(data[i] != i+1){
      cout << i+1 << nn;
      return 0;
    }

  cout << n << nn;
}
