#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int size = name.size();
    int n = ceisqrt(size);
    cout << size  << " " << n << endl;
    return 0;
}