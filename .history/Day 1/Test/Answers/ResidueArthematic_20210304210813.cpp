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
    cin>>p1>>p2 >> a1>>a2;
    for(int i = 1; i <= 1e5;i++){
        if(i % p1 ==a1 && i % p2 == a2){
            a=i;
            break;
        }
    }
    int b1,b2,b=0;
    cin >> b1 >> b2;
    for(int i=1;i<=1e5;i++)
    {
        if(i % p1 == b1 && i % p2 == b2)
        {
            b=i;
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