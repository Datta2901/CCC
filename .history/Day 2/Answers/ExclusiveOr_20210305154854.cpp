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
    long long int diff = abs(alen - blen);
    if(a < b){
        a = AddZeroes(a,diff);
    }else{
        b = AddZeroes(b,diff);
    }
    cout << a << " "
    for(int i = 0; i < a.size(); i++){
        cout << ((a[i] - 48) ^ (b[i] - 48));
    }
    return 0;
}