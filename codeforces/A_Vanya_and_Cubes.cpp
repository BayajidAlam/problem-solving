#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int sum = 0, cnt = 0;
  while (n > sum + cnt)
  {
    cnt++;
    sum += cnt;
    n -= sum;
  }
  cout << cnt << endl;
  return 0;
}