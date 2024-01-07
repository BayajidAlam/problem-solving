#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, h;
  cin >> n >> h;

  int cnt = 0;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > h)
    {
      cnt++;
    }
  }
  int totalWidth = (n - cnt) * 1 + cnt * 2;
  cout << totalWidth << endl;
  return 0;
}