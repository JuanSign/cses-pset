// [Repetitions]
// [24/10/2025] [19:06 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  char c = ' ';
  int ans = 1;
  int cur = 0;
  for(char i : s){
    if(i == c) cur++;
    else{
      ans = max(ans, cur);
      cur = 1;
      c = i;
    }
  }
  cout << max(ans,cur) << nn;
}
