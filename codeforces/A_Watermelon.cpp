#include <bits/stdc++.h>
using namespace std;

int main()
{

  int wt;
  cin >> wt;
  // check if weight is a even number and wt greater than 2 
  if (wt % 2 == 0 && wt > 2)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}