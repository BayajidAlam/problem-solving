#include <bits/stdc++.h>
using namespace std;

int main()
{
  // n - number of variable length array
  // q - number of queries
  int n, q;
  cin >> n >> q;
  vector<vector<int>> arr_2d;
  for (int i = 0; i < n; i++)
  {
    // k - array size
    int k;
    cin >> k;
    vector<int> tmp;
    for (int j = 0; j < k; j++)
    {
      // input every element of array
      int element;
      cin >> element;
      tmp.push_back(element);
    }
    arr_2d.push_back(tmp);
  }


  //look for queries
  for (int i = 0; i < q; i++)
  {
    int arr_num, arr_index;
    cin >> arr_num >> arr_index;
    cout << arr_2d[arr_num][arr_index] << endl;
  }

  return 0;
}