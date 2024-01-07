#include <bits/stdc++.h>
using namespace std;

int main()
{

  int yr;
  cin >> yr;
  while (true)
  {
    yr += 1;
    int a = yr / 1000;     // extract first digit
    int b = yr / 100 % 10; // extract second digit
    int c = yr / 10 % 10;  // extract third digit
    int d = yr % 10;       // extract fourth digit
    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
      break;
    }
  }
  cout << yr << endl;
  return 0;
}