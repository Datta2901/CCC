#include<stdio.h>
int main(){
int a = 10, b  = 20, c =  9,

int *arr[3] = ( &a, &b, &c ); printf("%d", *arr[1]2* (*arr[2]));
}