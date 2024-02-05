#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }
    sort(v.begin(), v.end());
    bool increasing = true;
    for (int i = 1; i < n; i++)
    {
      if (v[i] == v[i - 1])
      {
        increasing = false;
        break;
      }
    }
    if (increasing)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}