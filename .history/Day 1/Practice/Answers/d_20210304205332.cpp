// https://www.hackerrank.com/contests/mar-21-ccc-srm-ktr-a-aswa-cps-a01/challenges/alls-well-that-ends-in-a-zero
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int count = 0;
    for(int i = 2; i <=(num); i++){
        if(num % i == 0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}