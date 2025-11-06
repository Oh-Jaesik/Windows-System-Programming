//#include <stdio.h>	
//#include <string.h>	
//#include <conio.h>	
//#include <stdlib.h>
//#include <Windows.h>	
//#include <stack>
//using namespace std;
//
//char board[100][100] =
//{
//	"1110010101010101010101010101010101011111111010110111",
//	"1110010101010101010101010101010101011111111010110111",
//	"1111111111111111111111010101010101011111111010110111",
//	"1110010101010101010101010101010101011111111010110111",
//	"1110010101010101010101010101010101011111111010110111",
//	"1110010101010101010101010101010101011111111010110111",
//	"1111111111111111111111111101010101011111111010110111",
//	"1110010101010101010101010101010101011111111010110111",
//	"1110010101010101010101010101010101011111111010110111",
//	"1111111111111111111111111111111111111111111010110111",
//	"1110010101010101010101010101010101011111111010110111",
//	"1110010101011111111111111111111111011111111010110111",
//	"1110010101010101010101010101010101011111111010110111",
//	"1110010101010111111111111111111101011111111010110111",
//	"1110010101010101010101111111111111111111111111110111",
//
//};
//
//char temp[100][100];
//
//int vis[100][100];
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//int n, m;
//
//void dfs1(int r, int c)
//{
//	int x = r;
//	int y = c;
//
//	for (int dir = 0; dir < 4; dir++)
//	{
//		int nx = x + dx[dir];
//		int ny = y + dy[dir];
//
//		if (nx < 0 || nx >= n || ny < 0 || ny >= m)
//			continue;
//		if (vis[nx][ny] != 0 || board[nx][ny] != '1')
//			continue;
//
//		board[nx][ny] = '.';
//		vis[nx][ny] = 1;
//		dfs1(nx, ny);
//	}
//}
//
//void dfs2(int r, int c)
//{
//	stack<pair<int, int>> st;
//	st.push({ r,c });
//	board[r][c] = '.';
//	vis[r][c] = 1;
//
//	while (!st.empty())
//	{
//		int x = st.top().first;
//		int y = st.top().second;
//		st.pop();
//
//		for (int dir = 0; dir < 4; dir++)
//		{
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
//				continue;
//			if (vis[nx][ny] != 0 || board[nx][ny] != '1')
//				continue;
//
//			board[nx][ny] = '.';
//			vis[nx][ny] = 1;
//			st.push({ nx , ny });
//		}
//	}
//}
//
//int main()
//{
//	n = 100;
//	m = 100;
//	DWORD start;
//	DWORD end;
//
//	int cnt1 = 10000;
//	int cnt2 = 10000;
//
//	start = GetTickCount();
//
//	while (cnt1--)
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			for (int j = 0; j < 100; j++)
//			{
//				temp[i][j] = board[i][j];
//				vis[i][j] = 0;
//			}
//		}
//
//		vis[0][0] = 1;
//		board[0][0] = '.';
//		dfs1(0, 0);
//
//		for (int i = 0; i < 100; i++)
//		{
//			for (int j = 0; j < 100; j++)
//			{
//				board[i][j] = temp[i][j];
//			}
//		}
//
//	}
//
//	end = GetTickCount();
//
//	printf("dfs_recursion : %u \n", end - start);
//
//
//
//	start = GetTickCount();
//
//	while (cnt2--)
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			for (int j = 0; j < 100; j++)
//			{
//				temp[i][j] = board[i][j];
//				vis[i][j] = 0;
//			}
//		}
//		dfs2(0, 0);
//	}
//
//	end = GetTickCount();
//
//	printf("dfs_stack : %u \n", end - start);
//
//	//for (int i = 0; i < 100; i++)
//	//{
//	//	for (int j = 0; j < 100; j++)
//	//	{
//	//		printf("%c", board[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//}