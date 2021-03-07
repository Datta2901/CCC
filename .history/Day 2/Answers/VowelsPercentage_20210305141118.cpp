#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin >> name;
    int vowelCount = 0;
    for(int i = 0; i < name.size(); i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            vowelCount++;
        }
    }
    float answer = (vowelCount / name.size()) *100;
    cout 
    return 0;
}