#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    int a, b;
    cin >> a >> b;
    int min_v = min(a, b);
    int max_v = max(a, b);
    int v = max(min_v * 2, max_v);
    cout << v * v << endl;
  }

  return 0;
}