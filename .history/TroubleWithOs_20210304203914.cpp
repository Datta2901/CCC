// https://www.hackerrank.com/contests/mar-21-ccc-srm-ktr-a-aswa-cps-a01/challenges/add-three-numbers-1
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long int count = 0,product = 1;
    while(t--){
        long long int n;
        cin >> n;
        while(n % 10 == 0){
            count++;
            n /= 10;
        }
        product *= n;
    }
    //  cout << to_string(product) + to_string(('0' * count));
    cout << "Product ----- " << product << " Zeroes ----"
}
