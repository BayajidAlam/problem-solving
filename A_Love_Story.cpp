#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    string st;
    cin >> st;
    string str = "codeforces";
    int ln = st.length();
    int cnt = 0;
    for (int i = 0; i < ln; i++)
    {
      if(str[i] == st[i]){
        cnt++;
      }
    } 
    cout << 10 - cnt << endl;
  }

  return 0;
}