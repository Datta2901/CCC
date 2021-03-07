#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin>>n;

    int ans=0;

    int s=n;

    for(int i=1;n>=1;i++)

    {

        ans+=i*(n-1);

        n--;

    }

    cout<<ans+s;

} 