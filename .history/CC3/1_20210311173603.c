#include <stdio.h> 



int main(){
int arr[5] = {1,2,3,4,5}; 
 int p, q, r; p = ++arr[1]; 
  q = arr[1]++; 
   r = arr[p++]; 
    printf("%d %d %d", p, q, r);

return 0;

}