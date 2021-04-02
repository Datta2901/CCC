#include<stdio.h>

int func()

{

return (double)(char)5.0;

}

inmain()

{

int a=5,res=0;

res= func(a);

printf("%d",res);

}