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

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  
    sort(arr, arr + n);

    vector<int> v;
    int diff = 0;

    for (int i = 1; i < n; i++)
    {
      diff = arr[i] - arr[i - 1];
      v.push_back(diff);
    }

    sort(v.begin(), v.end());
    cout << v[0] << endl;
  }

  return 0;
}