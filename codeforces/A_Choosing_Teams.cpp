#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, k, valids=0;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    if (p + k <= 5)
    {
      valids++;
    }
  }

  cout << valids / 3 << endl;
  return 0;
}