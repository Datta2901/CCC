#include<bits/stdc++.h>
using namespace std;

void shift(int a[],int n,int k){
   
    int cnt=0;
    
    while(cnt<k){
       int key=a[0]; 
       for(int i=1;i<n;i++){
            a[i-1]=a[i];
        }
        a[n-1]=key;
        cnt++;
    }
}

int main(){
    int size,times;
    cin >> size >> times;
    vector<int>numbers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    times = size % times;
    for(int )
    return 0;
}