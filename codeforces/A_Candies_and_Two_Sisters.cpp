#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  double n;
  long long ans;
  while (tt--)
  {
    ans = 0;
    cin >> n;
    ans = ceil(n / 2 - 1);
    cout << ans << endl;
  }

  return 0;
}