#include <bits/stdc++.h>
using namespace std;

int main()
{

  string chat;
  cin >> chat;
  sort(chat.begin(), chat.end());
  chat.erase(unique(chat.begin(), chat.end()), chat.end());
  int ln = chat.length();
  if (ln % 2 == 0)
  {
    cout << "CHAT WITH HER!" << endl;
  }
  else
  {
    cout << "IGNORE HIM!" << endl;
  }
  return 0;
}