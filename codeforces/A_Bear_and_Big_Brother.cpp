#include <bits/stdc++.h>
using namespace std;

int main()
{

  int lakma, bob;
  cin >> lakma >> bob;

  int cnt = 0;
  while (lakma < bob || lakma == bob)
  {
    cnt++;
    lakma *= 3;
    bob *= 2;
  }
  cout << cnt << endl;
  return 0;
}