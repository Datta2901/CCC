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
    int alen = a.length(),blen = b.length();
    long long int diff = abs(al- );
    if(a < b){
        a = AddZeroes(a,diff);
    }else{
        b = AddZeroes(b,diff);
    }
    for(int i = 0; i < a.size(); i++){
        cout << (a[i] ^ b[i]);
    }
    return 0;
}