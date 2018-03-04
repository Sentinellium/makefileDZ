#include "functions.h"
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            swap(a,b);
        }
        b=b-a;
    }
    return a;
}
