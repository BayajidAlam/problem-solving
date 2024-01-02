#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a,int *b){
    int tmpA = *a;
    int tmpB = *b;
    *a = tmpA + tmpB;
    *b = abs(tmpA - tmpB);
}

int main() {
    int a,b;
    cin >> a >> b;
    
    update(&a,&b);
    
    cout << a << endl;
    cout << b << endl;
    return 0;
}
