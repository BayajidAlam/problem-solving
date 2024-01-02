#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ll long long

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    // n - length of b array
    // k - length of items was removed
    int n, k;
    cin >> n >> k;

    vector<int> b(n);
    // assume initial product of b array is 1
    ll product = 1;

    // input and calculate product of b array
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];

      // Check for overflow before multiplying
      if (product > LLONG_MAX / b[i])
      {
        cout << "NO" << endl;
        break;
      }

      product = product * b[i];
    }

    if (2023 % product != 0)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
      cout << 2023 / product << " ";
      k--;

      // print the rest element that was removed as 1
      while (k--)
      {
        cout << 1 << " ";
      }
      cout << endl;
    }
  }

  return 0;
}