#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n = 4, cnt = 0;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a, a + n);

  for (int i = 0; i < n; i++)
  {
    if (a[i] != a[i + 1])
    {
      cnt++;
    }
  }

  cout << n - cnt << endl;
  return 0;
}