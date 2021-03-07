#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,positi=0,count=0;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            positi=i;
        else
            break;
    }
    for(i=positi;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            positi=i+1;
         else
             break;
    }
    for(i=positi;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
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
