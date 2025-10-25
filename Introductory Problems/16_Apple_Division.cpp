// [Apple Division]
// [24/10/2025] [20:12 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

long long solve(int data[], long long sumA, long long sumB, int i, int n)
{
	if(i == n)
	{
		return abs(sumA-sumB);
	}
	long long A = solve(data, sumA+data[i], sumB, i+1, n);
	long long B = solve(data, sumA, sumB+data[i], i+1, n);
	return min(A,B);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

	int n; cin >> n;
	int data[n];
	for(int i = 0; i < n; i++) cin >> data[i];
	cout << solve(data, 0, 0, 0, n) << nn;
}
