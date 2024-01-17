#include <bits/stdc++.h>
using namespace std;

int main()
{

  int val = 0;
  long long price_made = 0;

  int k, r;
  cin >> k >> r;

  bool flag = 1;
  while (flag)
  {
    if ((price_made % 10 == 0 && price_made != 0) || price_made % 10 == r)
    {
      break;
    }
    val++;
    price_made += k;
  }
  cout << val << endl;
  return 0;
}