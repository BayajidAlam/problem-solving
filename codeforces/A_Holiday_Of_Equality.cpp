#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  while (cin >> n)
  {
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    int mx = arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
      sum += abs(mx - arr[i]);
    }
    cout << sum << endl;
  }

  return 0;
}