#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int a, b;
  cin >> a >> b;
  int next_prime = a + 1;
  while (!is_prime(next_prime))
  {
    next_prime++;
  }
  if (b == next_prime)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}