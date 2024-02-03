#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if(y < x) cout << "LOSS" << endl;
	    else if(y == x) cout << "NEUTRAL" << endl;
	    else cout << "PROFIT" << endl;
	}
}
