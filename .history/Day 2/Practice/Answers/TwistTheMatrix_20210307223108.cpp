#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[1005][1005],x,y,n,z,s=0;
int get(int i,int j)
{
    if(s==0)
        return a[i][j];
    if(s==1)
       return a[y][n-x+1];
     if(s==2)
        return a[n-x+1][n-y+1];
    else
        return a[n-y+1][x];
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j;
    char c;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    while(1){
        cin>>c;
        if(c=='-')
            break;
        if(c=='A'){
            cin>>x;
            x=x/90;
            s=(s-x)%4;
            if(s<0)
                s=s+4;
        }
        else if(c=='Q'){
            cin>>x>>y;
            cout<<get(x,y)<<endl;
        }
        else{
            cin>>x>>y>>z;
            a[x][y]=z;
        }
        }
    return 0;
}