#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int m, c;
  int winM = 0, winC = 0, draw = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> m >> c;
    if (m > c)
      winM++;
    else if (m < c)
      winC++;
    else
      draw;
  }
  if (draw == n || winC == winM)
    cout << "Friendship is magic!^^" << endl;
  else if (winM > winC)
    cout << "Mishka" << endl;
  else
    cout << "Chris" << endl;
  return 0;
}