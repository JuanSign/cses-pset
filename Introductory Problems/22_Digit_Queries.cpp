// [Digit Queries]
// [24/10/2025] [20:21 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

long long power(long long a, long long b)
{
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a);
        }
        a *= a;
        b >>= 1;
    }
    return res;
}

int solve(long long k)
{
	int digit = 1;
	long long base = 9;
	while(k - (digit*base) > 0)
	{
		k -= digit*base;
		digit++;
		base *= 10;
	}
	long long X = power(10, (digit - 1)) + (k - 1) / digit;
	if((k%digit) != 0) X /= power(10, (digit-(k%digit)));
	return X%10;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

	int q; cin >> q;
	while(q--)
	{
		long long k; cin >> k;
		cout << solve(k) << nn;
	}
}
