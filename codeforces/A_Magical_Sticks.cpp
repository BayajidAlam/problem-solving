#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    long long n;
    cin >> n;
    int ans = 0;
    ans = n / 2;
    if (n % 2 == 1)
      ans++;
    cout << ans << endl;
  }

  return 0;
}