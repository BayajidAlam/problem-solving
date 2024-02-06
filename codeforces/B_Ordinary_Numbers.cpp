#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    long long n, cnt = 0, start;
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
      start = i;
      while (start <= n)
      {
        cnt++;
        start = start * 10 + i;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}