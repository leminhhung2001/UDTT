#include <bits/stdc++.h>
using namespace std;

#define MAX 100
int n;
struct data
{
  int start, end;
};
data h[MAX];

void swap(data &a, data &b)
{
  data tg = a;
  a = b;
  b = tg;
}

int count(data h[])
{
  int ans = 1, j = 0;
  for (int i = 0; i < n; i++)
  {
    if (h[i].start >= h[j].end)
    {
      ans++;
      j = i;
    }
  }
  return ans;
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> h[i].start;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> h[i].end;
  }

  for (int i = 0; i < n; i++)
    for (int j = n - 1; j > i; j--)
    {
      if (h[j].end < h[j - 1].end)
      {
        swap(h[j], h[j - 1]);
      }
    }

  cout << "Result: " << count(h) << endl;
}