// [Knight Moves Grid]
// [24/10/2025] [20:18 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

bool check(int r, int c, int n){
  return (r >= 0) && (c >= 0) && (r < n) && (c < n);
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<vector<int>> grid(n, vector<int>(n,-1));

  grid[0][0] = 0;
  queue<pair<int,int>> q;

  q.push({0,0});
  pair<int,int> dir[] = {{-2,-1}, {-1,-2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2,1}};

  while(!q.empty()){
    pair<int,int> cur = q.front();
    q.pop();
    int r = cur.first;
    int c = cur.second;
    for(int i = 0; i < 8; i++){
      int rr = r + dir[i].first;
      int cc = c + dir[i].second;
      if(check(rr, cc, n)){
        if(grid[rr][cc] == -1){
          grid[rr][cc] = grid[r][c]+1;
          q.push({rr,cc});
        }
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << grid[i][j] << " ";
    }
    cout << nn;
  }
}
