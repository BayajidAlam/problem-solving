#include <bits/stdc++.h>
using namespace std;

int main()
{

  int ans, a, b, c;
  while (cin >> a >> b >> c)
  {
    ans = a + b + c;
    ans = max(ans, (a * b * c));
    ans = max(ans, ((a + b) * c));
    ans = max(ans, (a * (b + c)));
    ans = max(ans, (a + (b * c)));
    ans = max(ans, ((a * b) + c));
    cout << ans << endl;
  };

  return 0;
}