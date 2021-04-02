#include <stdio.h> 



int main(){
char str1[] = "Narendra Modi 1950";

char str2[] = "Gujarat India";

memmove(str1, str2, 5); printf("%s,%s", str1, str2);

return 0;

}