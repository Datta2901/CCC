#include<bits/stdc++.h>
#include<string>
using namespace std;

string operator*(const string& s, unsigned int n) {
    stringstream out;
    while (n--)
        out << s;
    return out.str();
}

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
    }
    string zero = "0";
    cout << to_string(product) + (zero * count);

    // cout << "Product ----- " << product << " Zeroes ---- " << count << endl;
}
