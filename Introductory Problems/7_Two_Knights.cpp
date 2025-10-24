// [Two Knights]
// [24/10/2025] [19:40 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

void solve(int i){
    unsigned long long int ii = i;
    unsigned long long int total = (ii*ii)*(ii*ii-1)/2;
    if(ii > 2) total -= 4*(ii-1)*(ii-2);
    cout << total << nn;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for(int i = 1; i <= n; i++) solve(i);
}
