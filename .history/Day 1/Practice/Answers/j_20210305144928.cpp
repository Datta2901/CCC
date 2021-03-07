#include<bits/stdc++.h>
using namespace std;
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
    int count = 0;
    while(count < times){
       int key = numbers[0]; 
       for(int i = 1;i < size;i++){
            numbers[i-1]=numbers[i];
        }
        numbers[size-1]=key;
        count++;
    }
    
    for(auto i : numbers){
        cout << i << " "
    }
    
    return 0;
}

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// void shift(int a[],int n,int k){
   
//     int cnt=0;
    
//     while(cnt<k){
//        int key=a[0]; 
//        for(int i=1;i<n;i++){
//             a[i-1]=a[i];
//         }
//         a[n-1]=key;
//         cnt++;
//     }
// }

// int main() {
//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     shift(a,n,k);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }