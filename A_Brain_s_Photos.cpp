#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, m;
  cin >> n >> m;
  char ch; 
  int cnt = 0;
  for (int i = 0; i < (n * m); i++)
  {
    cin >> ch;
    if (ch == 'B' || ch == 'W' || ch == 'G')
      cnt++;
  }
  if (cnt == (n * m))
    cout << "#Black&White" << endl;
  else
    cout << "#Color" << endl;
  return 0;
}