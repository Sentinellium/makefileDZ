#include "functions.h"
#include <iostream>

using namespace std;

void base(int n){
    int m=0;
    for (int i=1;i<=n;i++){
        if (gcd(i,n)!=1)
            m++;
    }
    cout << m << endl;
}
