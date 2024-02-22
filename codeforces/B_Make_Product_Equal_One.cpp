#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

  ll n, arr[100001];
  cin >> n;

  ll sum = 0;
  int pos = 0, neg = 0, zero = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1 || arr[i] == -1)
      continue;
    else if (arr[i] < -1)
    {
      sum += abs(arr[i] + 1);
      arr[i] -= (arr[i] + 1);
    }
    else if (arr[i] > 1)
    {
      sum += arr[i] - 1;
      arr[i] = 1;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      zero++;
      arr[i] = 1;
    }
    else if (arr[i] == -1)
      neg++;
    else if (arr[i] == 1)
      pos++;
  }

  sum += zero;
  pos += zero;
  if (neg % 2 == 1)
  {
    if (zero > 0)
      pos--;
    else
      sum += 2;
  }
  cout << sum << endl;
  return 0;
}