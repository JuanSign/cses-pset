// [Mex Grid Construction]
// [24/10/2025] [20:18 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  int ans[n][n];

  for(int r = 0; r < n; r++){
    for(int c = 0; c < n; c++){
      set<int> found;
      for(int cc = 0; cc < c; cc++) found.insert(ans[r][cc]);
      for(int rr = 0; rr < r; rr++) found.insert(ans[rr][c]);
      int x = 0;
      while(found.count(x)) x++;
      cout << x << " ";
      ans[r][c] = x;
    }
    cout << nn;
  }
}
