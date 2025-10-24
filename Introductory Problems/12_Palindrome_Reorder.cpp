// [Palindrome Reorder]
// [24/10/2025] [19:54 GMT+07]
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

	int count[26] = {0};
	for(char i : s) count[i-'A']++;

	int odd = 0;
	for(int i = 0; i < 26; i++) odd += (count[i]%2);

	if(odd > 1) cout << "NO SOLUTION" << nn;
	else
	{
		string half = "";
		string mid = "";
		for(int i = 0; i < 26; i++)
		{
			if(count[i]%2) for(int j = 0; j < count[i]; j++) mid += char(i+65);
			else for(int j = 0; j < count[i]/2; j++) half += char(i+65);
		}

		for(int i = 0; i < (int)half.size(); i++) cout << half[i];
		for(int i = 0; i < (int)mid.size(); i++) cout << mid[i];
		for(int i = half.size()-1; i >= 0; i--) cout << half[i];
		cout << nn;
	}
}
