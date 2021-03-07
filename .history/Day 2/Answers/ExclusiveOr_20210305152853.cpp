#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    if(a < b){
        a = AddZeroes(a);
    }else{
        b = AddZeroes(b);
    }
    return 0;
}