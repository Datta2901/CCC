#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int number;
    cin >> number;
    long long answer = 0,temp = 5;

    for(int i = 1;temp < number; i++,temp = 6 * i - 1){
        bool prime = true;
            for(int i = 2; i < temp; j += 2){
                if(temp % i == 0){
                    prime = false;
                    break;
                }
            }
            if(prime){
                answer++;
            }
    }

    return 0;
}