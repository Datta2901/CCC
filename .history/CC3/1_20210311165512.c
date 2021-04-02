#include<stdio.h>

int main(){

char str[10]="TAJMAHAL";
char *p = strrchr(str, 'M');
printf("%c", *(++p));
return 0;

}

