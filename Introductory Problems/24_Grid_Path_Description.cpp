// [Grid Path Description]
// [25/10/2025] [14:01 GMT+07]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'
#define NN endl

const int DIR_LEN = 4;
const int PATH_LEN = 48;
const int GRID_SIZE = 9; //with borders
const int DY[DIR_LEN] = {-1, 0, 1, 0};
const int DX[DIR_LEN] = {0, 1, 0, -1};

int PATH[PATH_LEN];
bool onPath[GRID_SIZE][GRID_SIZE];

int tryPath(int index, int x, int y)
{
	if(onPath[y][x-1] && onPath[y][x+1] && !onPath[y-1][x] && !onPath[y+1][x])
		return 0;
	if(onPath[y-1][x] && onPath[y+1][x] && !onPath[y][x-1] && !onPath[y][x+1])
		return 0;
	for(int i = 0; i < DIR_LEN; i++)
	{
		bool diagonal, adj1, adj2;
		if(i%2) diagonal = onPath[y+DY[(i+1)%DIR_LEN]][x+DX[i]];
		else diagonal = onPath[y+DY[i]][x+DX[(i+1)%DIR_LEN]];

		adj1 = onPath[y+DY[i]][x+DX[i]];
		adj2 = onPath[y+DY[(i+1)%DIR_LEN]][x+DX[(i+1)%DIR_LEN]];

		if(diagonal && !adj1 && !adj2) return 0;
	}
	if(x == 1 && y == 7) return (index == PATH_LEN);

	int res = 0;
	onPath[y][x] = true;
	if(PATH[index] < 4)
	{
		if(!onPath[y+DY[PATH[index]]][x+DX[PATH[index]]])
			res += tryPath(index+1, x+DX[PATH[index]], y+DY[PATH[index]]);
	}
	else
	{
		for(int i = 0; i < DIR_LEN; i++)
		{
			if(onPath[y+DY[i]][x+DX[i]]) continue;
			res += tryPath(index+1, x+DX[i], y+DY[i]);
		}
	}

	onPath[y][x] = false;
	return res;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

	string s; cin >> s;
	for(int i = 0; i < GRID_SIZE; i++)
	{
		onPath[i][0] = true;
		onPath[i][8] = true;
		onPath[0][i] = true;
		onPath[8][i] = true;
	}
	for(int i = 0; i < 48; i++)
	{
		char cur = s[i];
		if(cur == 'U') PATH[i] = 0;
		if(cur == 'R') PATH[i] = 1;
		if(cur == 'D') PATH[i] = 2;
		if(cur == 'L') PATH[i] = 3;
		if(cur == '?') PATH[i] = 4;
	}

	int index = 0;
	int x = 1;
	int y = 1;
	int ans = tryPath(index, x, y);
	cout << ans << nn;
}
