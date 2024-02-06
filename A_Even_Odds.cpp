#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long n, k, part, ans;
  cin >> n >> k;
  if (n % 2 == 0)
  {
    part = n / 2;
  }
  else
  {
    part = (n / 2) + 1;
  }
  if (k <= part)
  {
    ans = (2 * k) - 1;
  }
  else
  {
    ans = (k - part) * 2;
  }
  cout << ans << endl;
  return 0;
}