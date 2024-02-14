#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
  return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
  int tt;
  cin >> tt;
  while (tt--)
  {
    ll n;
    cin >> n;
    vector<long> v, w;
    for (long i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      if (x % 2)
      {
        w.push_back(x);
      }
      else
      {
        v.push_back(x);
      }
    }

    ll cnt = 0;
    cnt += v.size() * (v.size() - 1) / 2 + v.size() * w.size();
    for (long i = 0; i < w.size(); i++)
    {
      for (long j = i + 1; j < w.size(); j++)
      {
        cnt += (gcd(w[i], w[j]) > 1);
      }
    }

    cout << cnt << endl;
  }
}