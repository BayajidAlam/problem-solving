#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str)
{
  vector<int> result;
  stringstream ss(str);

  char ch; // to store discared comma
  int num;

  while (ss >> num)
  {
    result.push_back(num);
    ss >> ch; // discard comma
  }

  return result;
}

int main()
{
  string str;
  cin >> str;

  vector<int> integers = parseInts(str);
  for (int i : integers)
  {
    cout << i << endl;
  }
  return 0;
}