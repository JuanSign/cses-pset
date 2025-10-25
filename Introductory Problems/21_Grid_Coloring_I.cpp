// [Grid Coloring I]
// [24/10/2025] [20:20 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;
  string grid[n];
  for(int i = 0; i < n; i++) cin >> grid[i];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if((i+j)%2) grid[i][j] = ((grid[i][j] == 'A')? 'C' : 'A');
      else grid[i][j] = ((grid[i][j] == 'B')? 'D' : 'B');
    }
    cout << grid[i] << nn;
  }
}
