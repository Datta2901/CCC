#include <bits/stdc++.h>
using namespace std;

// Therefore
// log( n! ) = log(1*2*3....... * n) 
//           = log(1) + log(2) + ........ +log(n)

int findDigits(int n){ 
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;
    double digits = 0;
    for (int i=2; i<=n; i++){
        digits += log10(i);
        cout  << log10(i) << " ";
    }
    return floor(digits) + 1;
}

int main(){
    int n;
    cin>>n;
    cout << endl << findDigits(n);
    return 0;
}