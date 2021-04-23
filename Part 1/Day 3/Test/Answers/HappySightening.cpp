#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    map<int,int>aa;
    int max =INT_MIN;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        aa[a]++;
        if(max < aa[a]){
            max = aa[a];
        }
    }
    cout << size - max;
    return 0;
}