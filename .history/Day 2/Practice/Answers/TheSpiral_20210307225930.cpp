#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n][n];
    int coun = 1;
    int s=0,e=n;
    for (int j = n; j>0; j=j-2){
        for (int i=s; i<e; i++){
            a[s][i] = coun++;
        }
        for (int i=s+1; i<e; i++){
            a[i][e-1] = coun++;
        }
        for (int i = e-2; i>=s; i--){
            a[e-1][i] = coun++;
        }
        for (int i = e-2; i>=s+1; i--){
            a[i][s] = coun++;
        }
        
        s++;
        e--;
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}