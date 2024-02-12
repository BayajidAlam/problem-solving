#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;
    char c[] = "abcdefghijklmnopqrstuvwxyz";
    string st;
    for (int i = 0; i < b; i++)
    {
      st[i] = c[i];
    }
    int k = 0;
    while (n--)
    {
      cout << st[k];
      k++; 
      if (k == b) k = 0;
    }
    cout << endl;
  }

  return 0;
}