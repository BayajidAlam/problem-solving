#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    while(x--){
        int x;
        cin >> x;
        if(x <3) cout << "LIGHT" << endl;
        else if(x >= 3 && x < 7) cout << "MODERATE" << endl;
        else cout << "HEAVY" << endl;
    }
}
