#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n],sum=0,cnt=0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  sum = sum / 2;
  sort(arr, arr + n);
  int sum_2 = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    sum_2 += arr[i];
    ++cnt;
    if (sum_2 > sum)
    {
      break;
    }
  }
  cout << cnt;
  return 0;
}