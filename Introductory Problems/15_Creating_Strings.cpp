// [Creating Strings]
// [24/10/2025] [20:05 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

	string s; cin >> s;
	sort(s.begin(), s.end());
	vector<string> ans;

	do
	{
		ans.push_back(s);
	}while(next_permutation(s.begin(),s.end()));

	cout << ans.size() << nn;
	for(string i : ans) cout << i << nn;
}
