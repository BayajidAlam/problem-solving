#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a > b && a > c){
	        cout << max(b,c) << endl;
	    }
	    else if(b > a && b > c){
	        cout << max(a,c) << endl;
	    }
	    else{
	        cout << max(a,b) << endl;
	    }
	}
}
