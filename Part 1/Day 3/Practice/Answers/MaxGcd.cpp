#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long gcd = 0;
    if(n==1){
        cout << -1 << "\n";
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(gcd < __gcd(arr[i],arr[j])){
                gcd = __gcd(arr[i],arr[j]);
            }
        }
    }
    cout << gcd << "\n";
    return 0;
}