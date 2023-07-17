#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int T, R, C;
int vis[205][205];
char mp[205][205];
string ans[15];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

struct node
{
	int x;
	int y;
	int step;
};

queue<node> que;

void bfs()
{
	while (que.size())
	{
		node hd = que.front();
		que.pop();
		for (int i = 0; i < 4; i++)
		{
			int r = hd.x + dx[i];
			int c = hd.y + dy[i];
			int step = hd.step + 1;
			if (r <= 0 || r > R || c <= 0 || c > C || mp[r][c] == '#' || vis[r][c] >= 0)
			{
				continue;
			}
			else
			{
				vis[r][c] = step;
				node newstruct = {r, c, step};
				que.push(newstruct);
			}
		}
	}
}

int main()
{
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int sx = 0, sy = 0, ex = 0, ey = 0;
		cin >> R >> C;
		memset(vis, -1, sizeof vis);
		for (int j = 1; j <= R; j++)
		{
			for (int k = 1; k <= C; k++)
			{
				cin >> mp[j][k];
				if (mp[j][k] == 'S')
				{
					sx = j;
					sy = k;
				}
				if (mp[j][k] == 'E')
				{
					ex = j;
					ey = k;
				}
			}
		}
		vis[sx][sy] = 0;
		node newstruct = {sx, sy, 0};
		que.push(newstruct);
		bfs();
		if (vis[ex][ey] == -1)
		{
			ans[i] = "oop!";
		}
		else
		{
			ans[i] = to_string(vis[ex][ey]);
		}
	}
	for (int i = 1; i <= T; i++)
	{
		cout << ans[i];
		cout << endl;
	}
}