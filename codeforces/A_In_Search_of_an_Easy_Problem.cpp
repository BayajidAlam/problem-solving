#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int a[n];

  bool isHard = false;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == 1)
    {
      isHard = true;
      break;
    }
  }

  if (isHard)
  {
    cout << "HARD" << endl;
  }
  else
  {
    cout << "EASY" << endl;
  }
  return 0;
}