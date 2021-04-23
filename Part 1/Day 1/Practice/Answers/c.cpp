// https://www.hackerrank.com/contests/mar-21-ccc-srm-ktr-a-aswa-cps-a01/challenges/ccc-hackathon-101-reverse-gear
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
       int f,b,t,d;
        cin >> f >> b >> t >> d;
        int answer = 0;
        while(b < d){
            answer += f + b;
            d = d - (b-f);
        }
        answer += d;
        cout << answer * t << endl;
    }
        
    return 0;
}