#include <bits/stdc++.h>
using namespace std;

int deQuy(int n)
{
  if (n < 10)
    return 1;
  else
    return 1 + deQuy(n / 10);
}

int main()
{
  int a;
  cin >> a;
  int k = deQuy(a);
  cout << k << endl;
}