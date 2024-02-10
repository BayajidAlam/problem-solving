#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  if (n >= 0)
    cout << n << endl;
  else
  {
    // 123
    int a = n / 10;                // 123/10=3
    int b = n / 100 * 10 + n % 10; // 123/100*10+123%10=1*10+3=10+3=13
    cout << max(a, b) << endl;
  }
  return 0;
}