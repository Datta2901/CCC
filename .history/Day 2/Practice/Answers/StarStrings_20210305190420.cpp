// #include<bits/stdc++.h>
// using namespace std;

// bool isVowel(char a){
//     if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'|| a == 'y'){
//         return true;
//     }
//     return false;
// }

// int main(){
//     string name;
//     cin >> name;
//     bool answer = true;
//     for(int i = 0; i < name.size() - 1; i++){
//         if(name[i] == name[i + 1]){
//             answer = false;
//             break;
//         }if(isVowel(name[i]) && isVowel(name[i + 1])){
//             answer = false;
//             break;
//         }
//     }
//     if(answer){
//         cout << "Yes" << endl;
//     }else{
//         cout << "No" << endl;
//     }
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
string s;
    cin>>s;
    bool k;
    int l=s.size();
    for(int i=0;i<l-1;i++){
        if(s[i]==s[i+1]){
            k=false;
            break;
        }
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
            if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y'){
                k=false;
                break;
                
        }
    }
    if(!k)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}