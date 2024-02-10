#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll mod = n % 2020;
    ll div = n / 2020;
    if (mod <= div)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}