#include <bits/stdc++.h>
using namespace std;

int main()
{

  int x = 0;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      cin >> x;
      if (x == 1)
      {
        // Manhattan distance of this element from the center of the matrix
        cout << abs(i - 3) + abs(j - 3) << endl;
      }
    }
  }
  return 0;
}