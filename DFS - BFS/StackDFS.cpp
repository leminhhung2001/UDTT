#include <bits/stdc++.h>
using namespace std;

vector<int> a[100];
stack<int> s; //Khởi tạo ngăn xếp

int n, m, u, v, dd[100], ans = 0;
void DFS(int x)
{
    while (!s.empty())
    {
        s.pop(); //Kiểm tra ngăn xếp có phần tử không? Nếu còn thì xoá phần tử ở đầu ngăn xếp
    }
    s.push(x); //Đẩy phần tử vào ngăn xếp
    dd[x] = 1; //Đánh dấu phần tử được đầy vào ngăn xếp => lần sau không xét lại nữa
    while (!s.empty())
    {
        int u = s.top();
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
    }
    for (int i = 1; i <= n; i++)
    {
        if (dd[i] == 0)
        {
            ans++;
            DFS(i);
        }
    }
    cout << " " << ans;
}

// 10 9

// 1 3
// 1 2
// 3 4
// 3 5
// 4 10
// 5 8
// 2 6
// 2 7
// 7 9
