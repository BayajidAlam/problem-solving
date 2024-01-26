#include <bits/stdc++.h>
using namespace std;

int main()
{

  long tt;
  cin >> tt;
  while (tt--)
  {
    long n;
    cin >> n;
    long mx(0), min(1e9 + 7);
    for (long i = 0; i < n; i++)
    {
      long x;
      cin >> x;
      mx = (mx > x) ? mx : x;
      min = (min < x) ? min : x;
    }
    cout << mx - min << endl;
  }

  return 0;
}