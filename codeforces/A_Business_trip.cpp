#include <bits/stdc++.h>
using namespace std;

int main()
{

  int k, a[12], total = 0;
  cin >> k;
  for (int i = 0; i < 12; i++)
  {
    cin >> a[i];
    total += a[i];
  }
  if (total < k)
    cout << -1 << endl;
  else
  {
    sort(a, a + 12, greater<int>());
    int sum = 0;
    int month = 0;
    while (sum < k)
    {
      sum += a[month];
      month++;
    }
    cout << month << endl;
  }
  return 0;
}