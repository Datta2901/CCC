// https://www.hackerrank.com/contests/mar-21-ccc-srm-ktr-a-aswa-cps-a01/challenges/leader-sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int size;
    cin >> size;
    vector<int>bbb;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        bbb.push_back(a);
    }
    int max = INT_MIN;
    for(int i = size - 1; i >= 0; i--){
        if(max < bbb[i]){
            max = bbb[i];
            sum += bbb[i];
        }
    }
    cout << sum;

}