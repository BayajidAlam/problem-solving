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
    int a[n], b[n];
    int min_a = INT_MAX, min_b = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      min_a = min(min_a, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
      min_b = min(min_b, b[i]);
    }
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
      int diff = max(a[i] - min_a, b[i] - min_b);
      total += diff;
    }
    cout << total << endl;
  }

  return 0;
}