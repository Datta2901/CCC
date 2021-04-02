#include<stdio.h>

int a=5,b=2, res=0; res=fun2(a,b); printf("%d",res); }

int fun(int x, int y)
{
     if (y == 0) return 0; return (x + fun(x, y-1));

int fun2(int a, int b)

if (b == 0) return 1;

return fun(a, fun2(a, b-1));

}