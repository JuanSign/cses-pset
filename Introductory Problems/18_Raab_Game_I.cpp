// [Raab Game I]
// [24/10/2025] [20:16 GMT+07]
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
    int n, a, b;
    cin >> n >> a >> b;
    if(a+b > n) cout << "NO" << nn;
    else if((a && !b) || (!a && b)) cout << "NO" << nn;
    else{
      cout << "YES" << nn;
      int play = (a+b);
      for(int i = play-a+1; i <= play; i++) cout << i << " ";
      for(int i = 1; i <= play-a; i++) cout << i << " ";
      for(int i = play+1; i <= n; i++) cout << i << " ";
      cout << nn;
      for(int i = 1; i <= n; i++) cout << i << " ";
      cout << nn;
    }
  }
}
