#include <bits/stdc++.h>
using namespace std;

int deQuy(string s, int k)
{
  if (k > -1)
  {
    cout << s[k];
    return deQuy(s, k - 1);
  }
  cout << endl;
  return -1;
}

int main()
{
  string s = "abcdethur";
  int k = s.length();
  // cout << k << endl;
  deQuy(s, k - 1);
}