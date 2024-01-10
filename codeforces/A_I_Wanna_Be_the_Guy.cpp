#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, p, q;
  cin >> n;
  cin >> p;
  vector<int> arr;
  for (int i = 0; i < p; i++)
  {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int x;
    cin >> x;
    arr.push_back(x);
  }

  sort(arr.begin(), arr.end());

  int cnt = 0;
  for (int i = 0; i < p + q; i++)
  {
    if (arr[i] != arr[i + 1])
    {
      cnt++;
    }
  }

  if (n == cnt)
  {
    cout << "I become the guy." << endl;
  }
  else
  {
    cout << "Oh, my keyboard!" << endl;
  }
  return 0;
}