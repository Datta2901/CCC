#include<stdio.h>
int main(){
char c[50] ="A Kejriwal-Delhi";

memcpy(c+3,c,strlen(c)+1);

printf("%s",c);
}