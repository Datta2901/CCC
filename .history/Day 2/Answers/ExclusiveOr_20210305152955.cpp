#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    long long int diff = (abs(a.length() - b.length());
    if(a < b){
        a = AddZeroes(a,diff);
    }else{
        b = AddZeroes(b,);
    }
    return 0;
}