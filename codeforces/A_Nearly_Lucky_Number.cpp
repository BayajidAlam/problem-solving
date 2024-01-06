#include <bits/stdc++.h>
using namespace std;

int lucky_digit_count(long long n)
{
  int cnt = 0;
  while (n > 0)
  {
    int digit = n % 10;
    if (digit == 4 || digit == 7)
    {
      cnt++;
    }
    n /= 10;
  }
  return cnt;
}

bool is_lucky_number(int x)
{
  return x == 4 || x == 7 || x == 44 || x == 77 || x == 47 || x == 74;
}

int main()
{

  long long n;
  cin >> n;

  int lucky_cnt = lucky_digit_count(n);
  if (is_lucky_number(lucky_cnt))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}