// We are given two primes
// we are given there residues for three numbers
// we have to find that number and then find 2 * b + b - a value

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int p1,p2, a1,a2,a=0;
    cin >> p1 >> p2 >> a1 >> a2;
    for(int i = 1; i <= 1e5; i++){
        if(i % p1 ==a1 && i % p2 == a2){
            a = i;
            break;
        }
    }
    int b1,b2,b=0;
    cin >> b1 >> b2;
    for(int i = 1; i <= 1e5; i++){
        if(i % p1 == b1 && i % p2 == b2){
            b = i;
            break;
        }
    }
    int c1,c2,c=0;
    cin >> c1 >> c2;
    for(int i = 1; i <= 1e5;i++){
        if(i % p1 == c1 && i % p2 == c2){
            c=i;
            break;
        }
    }
    cout<<(2 * a)+b-c;
    return 0;
}
// 1st method 

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;


// int main() {
//     int prime1,prime2;
//     cin>>prime1;
//     cin>>prime2;
//     int a1,a2,a3,b1,b2,b3;
//     cin>>a1>>b1>>a2>>b2>>a3>>b3;
//      int a,b,c;
//     unordered_map<int, int> map;
//     int i;
//     for(i=0; ;i++)
//     {
//         int eqt1=prime1*i+a1;
//         if(map[eqt1]!=1)
//         {
//         map[eqt1]=1;
//         }
//         else
//         {
//             a=eqt1;
//             break;
//         }
//         int eqt2=prime2*i+b1;
//         if(map[eqt2]!=1)
//         {
//         map[eqt2]=1;
//         }
//         else
//         {
//             a=eqt2;
//             break;
//         }
//     }
//      unordered_map<int, int> map1;
    
//     for(i=0; ;i++)
//     {
//         int eqt1=prime1*i+a2;
//         if(map1[eqt1]!=1)
//         {
//         map1[eqt1]=1;
//         }
//         else
//         {
//             b=eqt1;
//             break;
//         }
//         int eqt2=prime2*i+b2;
//         if(map1[eqt2]!=1)
//         {
//         map1[eqt2]=1;
//         }
//         else
//         {
//             b=eqt2;
//             break;
//         }
//     }
    
//     unordered_map<int, int> map3;
    
//     for(i=0; ;i++)
//     {
//         int eqt1=prime1*i+a3;
//         if(map3[eqt1]!=1)
//         {
//         map3[eqt1]=1;
//         }
//         else
//         {
//             c=eqt1;
//             break;
//         }
//         int eqt2=prime2*i+b3;
//         if(map3[eqt2]!=1)
//         {
//         map3[eqt2]=1;
//         }
//         else
//         {
//             c=eqt2;
//             break;
//         }
//     }
//      cout << 2 * a + b - c; 
//     return 0;
}