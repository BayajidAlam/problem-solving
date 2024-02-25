#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    string st, given = "Timur";
    cin >> n;
    cin >> st;
    sort(given.begin(),given.end());
    sort(st.begin(),st.end());
    if (st == given) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main() {
    ll tt;
    cin >> tt;
    while (tt--){
         solve();
    }
    return 0;
}