#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,times;
    cin >> size >> times;
    vector<int>numbers,answer(size,0);
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    times =  % times;
    for(int i = 0; i < size; i++){
        answer[i] = numbers[times++];
        if(times == size){
            times = 0;
        }
    }
    for(auto i : answer){
        cout << i << " ";
    }
    cout << endl;
    
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

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int n,k,i;
//     cin >>n >>k;
//     int a[n], b[n];
//     for(i=0; i<n; i++)
//         cin >>a[i];
//     k=k%n;
//     for(i=0; i<n; i++)
//     {
//         b[i]=a[k++];
//         if(k==n)
//             k=0;
//     }
//     for(i=0; i<n; i++)
//         cout <<b[i] <<' ';
// }