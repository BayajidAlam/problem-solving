#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, k, rest_time, total_time_to_solve = 0, problem_count = 0;
  while (cin >> n >> k)
  {
    rest_time = 240 - k;
    for (int i = 1; i <= n; i++)
    {
      total_time_to_solve += 5 * i;
      if (total_time_to_solve > rest_time)
      {
        break;
      }
      problem_count += 1;
    }
    cout << problem_count << endl;
  }

  return 0;
}