// [Chessboard and Queens]
// [24/10/2025] [20:14 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

#define Checker vector<bool>

void solve(string board[8], int row, int& ans,
		   Checker& columns,
		   Checker& diag1,
		   Checker& diag2)
{
	if(row == 8)
	{
		ans++;
		return;
	}
	for(int col = 0; col < 8; col++)
	{
		if(columns[col] ||
		   diag1[row-col+7] ||
		   diag2[row+col] ||
		   board[row][col] == '*') continue;
		columns[col] = diag1[row-col+7] = diag2[row+col] = true;
		solve(board, row+1, ans, columns, diag1, diag2);
		columns[col] = diag1[row-col+7] = diag2[row+col] = false;
	}
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
	string board[8];
	for(int i = 0; i < 8; i++) cin >> board[i];
	Checker columns(8, false);
	Checker diag1(15, false);
	Checker diag2(15, false);

	int ans = 0;
	solve(board, 0, ans, columns, diag1, diag2);
	cout << ans << nn;
}
