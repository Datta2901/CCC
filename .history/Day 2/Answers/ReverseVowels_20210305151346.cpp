#include<bits/stdc++.h>
using namespace std;

bool isVowel(char a){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'|| a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        return true;
    }
    return false;
}

int main(){
    string name;
    cin >> name;
    vector<char>vowels;
    for(int i = 0; i < name.size(); i++){
        if(isVowel(name[i])){
            vowels.push(name[i]);
        }
    }
    for(int i = 0; i < name.size(); i++){
        
    }
    return 0;
}