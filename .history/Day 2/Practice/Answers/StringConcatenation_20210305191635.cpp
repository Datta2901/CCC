#include<bits/stdc++.h>
using namespace std;

int main(){
    int p;
    string word;
    cin >> p >> word;
    map<char,int> freq;
    for(int i = 0; i < word.size(); i++){
        freq[word[i]]++;
    }
    bool answer = true;
    for(auto i : freq){
        if(i.second % p != 0){
            answer = false;
            break;
        }
    }
    if()
    return 0;
}