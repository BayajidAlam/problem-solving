using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--){
	    int n,m;
	    cin >> n >> m;
	    if(n >= m){
	        cout << n - m << endl;
	    }
	    else 
	        cout << "0" << endl;
	}
}
