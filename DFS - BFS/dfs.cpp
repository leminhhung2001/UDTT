#include <bits/stdc++.h>
using namespace std;

int n, m;
int u, v;
vector<int> e[100];
int cx[100];
void dfs(int x)
{
    cx[x] = 1;
    cout << x << ' ';
    for (auto y : e[x])
    {
        if (cx[y] == 0)
            cx[y] = 1;
        dfs(y);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    dfs(1);
}
