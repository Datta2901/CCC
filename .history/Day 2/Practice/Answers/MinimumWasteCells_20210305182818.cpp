#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int size = name.size();
    int n = ceil(sqrt(size));
    // cout << size  << " " << n << endl;
    int index = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(index < s){
                cout << name[index++];
            }else{
                cout << '?';
            }
        }
        cout << endl;
    }
    return 0;
}