#include<stdio.h>
void fun(int n){

if(n > 0){

fun(n-1);

printf("%d", n);

fun(n-1);
}
}

int main()

{

fun(2);

return 0;

}


int main(){

}
