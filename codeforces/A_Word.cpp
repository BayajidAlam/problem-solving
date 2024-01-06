#include <bits/stdc++.h>
#include <string>
using namespace std;

string convert_to_uppercase(string s, int ln)
{
  for (int i = 0; i < ln; i++)
  {
    s[i] = toupper(s[i]);
  }
  return s;
}

string convert_to_lowercase(string s, int ln)
{
  for (int i = 0; i < ln; i++)
  {
    s[i] = tolower(s[i]);
  }
  return s;
}

int main()
{

  string s;
  cin >> s;
  int len = s.length();
  int upper = 0;
  int lower = 0;

  for (int i = 0; i < len; i++)
  {
    if (isupper(s[i]))
    {
      upper++;
    }
    else
    {
      lower++;
    }
  }

  if (upper > lower)
  {
    s = convert_to_uppercase(s, len);
  }
  else
  {
    s = convert_to_lowercase(s, len);
  }

  cout << s << endl;
  return 0;
}