#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>cost,number;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        number.push_back(a);
        cost.push_back(b);
    }
    int i = 0;
    while(i < n){
        if(cost[i] < cost[i + 1]){
            cost[i + 1] = cost[i];
        }
        i++;
    }
    int answer = 0;
    for(int i = 0; i < n; i++){
        answer += cost[i] * number[i];
    }
    cout << answer << endl;
    return 0;
}
// https://www.hackerrank.com/contests/mar-21-ccc-srm-ktr-a-aswa-cps-a01/challenges