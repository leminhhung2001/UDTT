#include <bits/stdc++.h>
using namespace std;

vector<int> a[100];
queue<int> s;
int n, m, u, v, dd[100];
void BFS(int x)
{
    while (!s.empty())
    {
        s.pop();
    }
    s.push(x);
    dd[x] = 1;
    while (!s.empty())
    {
        int u = s.front();
        s.pop();
        cout << u << ' ';
        for (int i = 0; i < a[u].size(); i++)
        {
            int k = a[u][i];
            if (dd[k] == 0)
            {
                dd[k] = 1;
                s.push(k);
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        // a[v].push_back(u);
    }
    BFS(1);
}
