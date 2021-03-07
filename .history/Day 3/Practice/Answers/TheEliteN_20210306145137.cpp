// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int power,size,a;
//     cin >> power >> size ;
//     a = power;
//     vector<int>enemies;
//     for(int i = 0; i < size; i++){
//         int a;
//         cin >> a;
//         enemies.push_back(a);
//     }
//     int answer = 1;
//     for(int i = 0; i < size;){
//         if(power > enemies[i]){
//             power -= enemies[i];
//             i++;
//         }else if(a < enemies[i]){
//             cout << -1;
//             break;
//         }else if(power <= enemies[i]){
//             answer++;
//             power = a;
//             i++;
//         }
//     }
//     cout << answer;
//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int p,n,i;
    cin>>p;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0,c=0;
    for(i=0;i<n;i++)
    { s=s+arr[i];
      if(arr[i]>=p)
      {
          cout<<-1;
          return 0;
          
      }
        if(p>s)
        {
            continue;
        }
        else
        {
        c++;   
          s=arr[i];  
        }
    }
    cout<<c+1;
    return 0;
}