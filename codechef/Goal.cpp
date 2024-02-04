#include <bits/stdc++.h>
using namespace std;

int main() {
	int a_goal,a_assist,b_goal,b_assist;
	cin >> a_goal >> a_assist >> b_goal >> b_assist;
	int a_pnt = a_goal * 2 + a_assist * 1;
	int b_pnt = b_goal * 2 + b_assist * 1;
	if(b_pnt == a_pnt) cout << "Equal" << endl;
	else if ( a_pnt > b_pnt) cout << "Messi" << endl;
	else cout << "Ronaldo" << endl;
}
