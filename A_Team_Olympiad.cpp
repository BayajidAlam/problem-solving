#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> math, prog, sport;

  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;

    if (x == 1)
      prog.push_back(i);
    else if (x == 2)
      math.push_back(i);
    else if (x == 3)
      sport.push_back(i);
  }

  int ans = min(math.size(), min(prog.size(), sport.size()));
  cout << ans << endl;
  for (int i = 0; i < ans; i++)
  {
    cout << math[i] << " " << prog[i] << " " << sport[i] << endl;
  }

  return 0;
}
