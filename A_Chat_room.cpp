#include <bits/stdc++.h>
using namespace std;

int main()
{

  string st, target;
  cin >> st;

  target = "hello";
  int n = st.length();
  int k = 0;

  for (int i = 0; i < n; i++)
  {
    if (st[i] == target[k])
    {
      k++;
    }
  }
  if (k == target.length())
  {
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
  return 0;
}