#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int cop = 0;
  int unwanted = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x > 0)
    {
      cop += x;
    }
    else
    {
      if (cop < 1)
      {
        unwanted++;
      }
      else
      {
        cop--;
      }
    }
  }

  cout << unwanted << endl;
  return 0;
}