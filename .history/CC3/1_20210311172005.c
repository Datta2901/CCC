#include<stdio.h>

int something(int number)

{

if(number <= = 0)

return 1;

else

return number *something(number-1);

}

main()

{

int a=5,res=0;

res= something(a);

printf("%d",res);

}

something(4);