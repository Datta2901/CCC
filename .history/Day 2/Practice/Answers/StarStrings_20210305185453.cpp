#include<bits/stdc++.h>
using namespace std;

bool isVowel(char a){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'|| a == 'y'){
        return true;
    }
    return false;
}

int main(){
    string name;
    cin >> name;
    bool answer = true;
    for(int i = 0; i < name.size() - 1; i++){
        if(name[i] == name[i + 1]){
            answer = false;
            break;
        } if(isVowel(name[i]) == isVowel(name[i + 1])){
            answer = false;
            break;
        }
    }
    if(answer){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}