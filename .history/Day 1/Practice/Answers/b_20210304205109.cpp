// //https://www.hackerrank.com/contests/mar-21-ccc-srm-ktr-a-aswa-cps-a01/challenges/add-two-values
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float a,b;
    cin >> a >> b;
    long int c = a + b;
    if(c < a + b){
        cout << a+b;
    }else{
        cout << c;
    }
    return 0;
}