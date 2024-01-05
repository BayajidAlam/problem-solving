#include <bits/stdc++.h>
using namespace std;

int main()
{

  // k - banana price
  // n - total money
  // w - amount of banana
  int k, n, w;
  cin >> k >> n >> w;

  int totalCost = 0;
  int haveToBorrow = 0;

  for (int i = 0; i <= w; i++)
  {
    totalCost = totalCost + (k * i);
  }

  if (totalCost <= n)
  {
    cout << "0" << endl;
  }
  else
  {
    haveToBorrow = totalCost - n;
    cout << haveToBorrow << endl;
  }
  return 0;
}