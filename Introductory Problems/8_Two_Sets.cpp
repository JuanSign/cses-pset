// [Two Sets]
// [24/10/2025] [19:42 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  unsigned long long int n; cin >> n;
  unsigned long long int sum = n*(n+1)/2;
  if(sum%2) cout << "NO" << nn;
  else{
    unsigned long long int target = sum/2;
    unsigned long long int cur = 0;
    vector<int> A, B;
    for(int i = n; i > 0; i--){
      A.push_back(i);
      cur += i;
      if(target-cur < i){
        int mid = target-cur;
        if(mid) A.push_back(mid);
        for(int j = 1; j < mid; j++) B.push_back(j);
        for(int j = mid+1; j < i; j++) B.push_back(j);
        break;
      }
    }
    cout << "YES" << nn;
    cout << A.size() << nn;
    for(int i : A) cout << i << " ";
    cout << nn;
    cout << B.size() << nn;
    for(int i : B) cout << i << " ";
  }
}
