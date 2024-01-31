#include <bits/stdc++.h>
using namespace std;

int main() {

    int tt;
    cin >> tt;
    while (tt--)
    {
      int a,b,c,d;
      cin >> a >> b >> c >> d;
      int win1 = max(a,b);
      int los1 = min(a,b);
      int win2 = max(c,d);
      int los2 = min(c,d);
      if(los1 <= win2 && los2 <= win1) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
    
    return 0;
}