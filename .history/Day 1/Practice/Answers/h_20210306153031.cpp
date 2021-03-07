#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,position=0,count=0;
    cin>>n;
    long long int [n];
    for(i=0;i<n;i++)
    {
        cin>>[i];
    }
    for(i=1;i<n;i++)
    {
        if([i]>[i-1])
            position=i;
        else
            break;
    }
    for(i=position;i<n;i++)
    {
        if([i]==[i+1])
            position=i+1;
         else
             break;
    }
    for(i=position;i<n-1;i++)
    {
        if([i]>[i+1])
            continue;
        else
        {
            count=-1;
            break;
        }
    }
    if(count==-1)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
    return 0;
}
