// [Gray Code]
// [24/10/2025] [20:01 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

vector<string> solve(int n)
{
	if(n == 1) return {"0","1"};
	vector<string> prev = solve(n-1);
	vector<string> ans;
	for(int i = 0; i < prev.size(); i++)
	{
		string cur = "0";
		cur += prev[i];
		ans.push_back(cur);
	}
	for(int i = prev.size()-1; i >= 0; i--)
	{
		string cur = "1";
		cur += prev[i];
		ans.push_back(cur);
	}
	return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

	int n; cin >> n;

	vector<string> ans = solve(n);
	for(string i : ans) cout << i << nn;
}
