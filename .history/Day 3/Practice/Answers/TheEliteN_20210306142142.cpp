#include<bits/stdc++.h>
using namespace std;
int main(){
    int power,size,a;
    cin >> power >> size ;
    a = power;
    vector<int>enemies;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        enemies.push_back(a);
    }
    int answer = 0;
    for(int i = 0; i < size; i++){
        if(power >= enemies[i]){
            power -= enemies[i];
        }else{
            answer++;
            power = 
        }
    }
    return 0;
}