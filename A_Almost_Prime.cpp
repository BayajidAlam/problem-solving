#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, amount = 0;
    cin >> n;
    bool b[3001] = {false};
    int preFactor[3001] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (!b[i])
        {
            for (int j = i; j <= n; j += i)
            {
                b[j] = true;
                preFactor[j] += 1;
            }
        }

        if (preFactor[i] == 2)
        {
            amount += 1;
        }
    }
    cout << amount << endl;
    return 0;        
}