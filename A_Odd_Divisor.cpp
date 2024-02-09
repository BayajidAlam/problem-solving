#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cy
#define cn
void solve()
{
  ll n;
  cin >> n;
  if (n % 2)
  {
    cout << "YES" << endl;
    return;
  }
  while (n % 2 == 0)
  {
    n /= 2;
  }
  if (n > 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
int main()
{

  ll tt;
  cin >> tt;
  while (tt--)
  {
    solve();
  }

  return 0;
}