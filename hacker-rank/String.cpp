#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a;
    string b;
    
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    
    char new_a = a[0];
    a[0] = b[0];
    b[0] = new_a;
    
    cout << a << " " << b << endl;
    return 0;
}
