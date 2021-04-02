#include<stdio.h>

void fun(int arr[]){
    int n = sizeof(arr);
    int i;
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    fun(arr)
}