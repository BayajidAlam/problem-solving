#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  string str, t;
  cin >> str;
  ll sz = str.length();
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  for (ll i = 0; i < sz; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
    {
      continue;
    }
    else
    {
      t += '.';
      t += str[i];
    }
  }
  cout << t << endl;
  return 0;
}
