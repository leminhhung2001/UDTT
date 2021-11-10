#include <bits/stdc++.h>
using namespace std;

vector<int> a[100]; //Khởi tạo vector có 100 phần tử, mỗi phần tử của vector là mảng 1 chiều
stack<int> s;       //Khởi tạo ngăn xếp

int u, v, dd[100];
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
        cout << u << " -> ";
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
    ifstream inFile;

    inFile.open("data.txt");
    if (!inFile)
    {
        cout << "Khong the doc file";
        exit(1);
    }

    while (inFile >> u >> v)
    {
        a[u].push_back(v);
    }
    DFS(1);

    inFile.close();
}
