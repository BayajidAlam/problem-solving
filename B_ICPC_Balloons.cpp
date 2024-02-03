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
    string s;
    cin >> s;
    unordered_set<char> st;
    for (char c : s)
    {
      st.insert(c);
    }
    cout << n + st.size() << endl;
  }

  return 0;
}