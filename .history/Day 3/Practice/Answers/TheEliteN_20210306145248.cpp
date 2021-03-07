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
    int answer = 1;
    bool ok = true;
    for(int i = 0; i < size;){
        if(power > enemies[i]){
            power -= enemies[i];
            i++;
        }else if(a <= enemies[i]){
            cout << -1;
            ok = false;
            break;
        }else if(power < enemies[i]){
            answer++;
            power = a;
            i++;
        }
    }
    if(ok)
    cout << answer;
    return 0;
}
