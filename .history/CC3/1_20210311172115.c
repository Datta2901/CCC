#include<stdio.h>

int max(int *arr, int n)

{

int a=0,b=n-1;

while (b != a)

{

if (arr[a] <= arr[b])

{

a = a+1;

}

else {b = b-1; }

}

return arr[al;

}

int main()

{

int arr[5]={1,2,3,4,5),

n=5,res%3D%3B

res=max(arr,n);

printf("%d",res);
}