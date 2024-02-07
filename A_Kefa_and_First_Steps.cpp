#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, l(1), ml(1);
  cin >> n;
  int profit[n];
  for (int i = 0; i < n; i++)
  {
    cin >> profit[i];
    if (i > 0)
    {
      if (profit[i] >= profit[i - 1])
      {
        l++;
        ml = max(ml, l);
      }
      else
        l = 1;
    }
  }
  cout << ml << endl;
  return 0;
}