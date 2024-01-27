#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  ll tt;
  cin >> tt;
  while (tt--)
  {
    ll n, k;
    cin >> n >> k;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    ll b[n];
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    ll ans = 0;
    ll idx = n;

    for (ll i = 0; i < n; i++)
    {
      if (k > 0 && a[i] < b[n - i - 1])
      {
        ans += b[n - i - 1];
        k--;
      }
      else
      {
        idx = i;
        break;
      }
    }

    for (ll i = idx; i < n; i++)
    {
      ans += a[i];
    }

    cout << ans << endl;
  }

  return 0;
}