#include<bits/stdc++.h>
using namespace std;

string AddZeroes(string a,int size){
    string b;
    for(int i = 0; i < size; i++){
        b += "0";
    }
    b += a;
    return b;
}

int main(){
    string a,b;
    cin >> a >> b;
    long long int diff = abs(a.length() - b.length());
    if(a < b){
        a = AddZeroes(a,diff);
    }else{
        b = AddZeroes(b,diff);
    }
    int ans = a[0] ^ b[0]
    return 0;
}