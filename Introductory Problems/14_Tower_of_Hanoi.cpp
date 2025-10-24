// [Tower of Hanoi]
// [24/10/2025] [20:02 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

#define Solutions vector<pair<int,int>>

void solve(Solutions &sol, int start, int mid, int end, int n)
{
	if(n == 1)
	{
		sol.push_back({start, end});
		return;
	}
	solve(sol, start, end, mid, n-1);
	solve(sol, start, mid, end, 1);
	solve(sol, mid, start, end, n-1);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
	int n; cin >> n;

	Solutions sol;
	solve(sol, 1, 2, 3, n);

	cout << sol.size() << nn;
	for(pair<int,int> i : sol)
	{
		cout << i.first << " " << i.second << nn;
	}
}
