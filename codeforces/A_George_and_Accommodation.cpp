#include <bits/stdc++.h>
using namespace std;

int main()
{

  int room;
  cin >> room;
  int p, q;
  int cnt = 0;
  while (room--)
  {
    cin >> p >> q;
    if ((q-p)>= 2)
    {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}