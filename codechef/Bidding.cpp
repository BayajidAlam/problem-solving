#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int final_mx = max(max(a,b),c);
	    if(final_mx == a) cout << "Alice" << endl;
	    else if(final_mx == b) cout << "Bob" << endl;
	    else cout << "Charlie" << endl;
	}
}
