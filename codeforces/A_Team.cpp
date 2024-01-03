#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int a, b, c;
  int cnt = 0;
  while (n--)
  {
    cin >> a >> b >> c;
    if (a && b == 1 || a && c == 1 || b && c == 1)
    {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}