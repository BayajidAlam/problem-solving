#include <bits/stdc++.h>
using namespace std;

int main()
{

  int m, n;
  cin >> m >> n;
  
  int area = m * n;
  int area_of_domino = 2 * 1;
  int number_of_domino = area / area_of_domino;

  cout << number_of_domino << endl;
  return 0;
}