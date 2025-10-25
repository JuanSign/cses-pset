// [String Reorder]
// [25/10/2025] [13:01 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

bool check(map<char,int>& freq, char cur){
  char mode = cur;
  int left = 0;
  for(auto& [ch, f] : freq){
    if(f > freq[mode])
      mode = ch;
    left += f;
  }
  return (freq[mode] <= (left+1)/2) && (freq[cur] <= left/2);
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  int n = s.length();

  map<char, int> freq;
  for(char c : s) freq[c]++;

  string ans = "";
  char last = ' ';

  for(int i = 0; i < n; i++){
    for(int i = 0; i < 26; i++){
      char ch = 'A' + i;
      if(freq[ch] == 0 || ch == last) continue;
      freq[ch]--;
      if(check(freq, ch)){
        ans.push_back(ch);
        last = ch;
        break;
      }else{
        freq[ch]++;
      }
    }
  }
  if((int)ans.length() == n) cout << ans << nn;
  else cout << -1 << nn;
}
