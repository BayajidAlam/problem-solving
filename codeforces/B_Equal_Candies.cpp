#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    int n;
    cin >> n;
    int arr[n];
    long long sum = 0;
    int mx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
      if (arr[i] < mx)
      {
        mx = arr[i];
      }
    }
    cout << sum - mx * n  << endl;
  }

  return 0;
}