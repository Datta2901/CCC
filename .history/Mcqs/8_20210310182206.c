#include<stdio.h>

void func(int n, int *res){
    int a = n,b = 0;
    if(n == 0){
        return ;
    }
    a = n % 5;
    b = n / 5;
    *res = *res + a;
}

int main(){
    int a = 16,sum =
    return 0;
}