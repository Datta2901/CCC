#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long int count = 0,product = 1;
    while(t--){
        long long int n;
        cin >> n;
        while(n % 10 == 0){
            count++;
            n /= 10;
        }
        product *= n;
    to_string(product);
        cout <<   +to_string(('0' * count));
    }
}
