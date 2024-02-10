#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    int n;
    cin >> n;
    string st;
    cin >> st;

    int first_black = st.find('B');
    int last_black = st.rfind('B');

    int ln = last_black - first_black + 1;
    cout << ln << endl;
  }

  return 0;
}