// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main(){
//     int n,k;
//     string s; 
//     cin >> n >> s >> k;
//     for (int i = 0; i <= n; i++) {
//         if (s[i] >= 'a' && s[i] <= 'z'){  
//             s[i] = ((s[i] - 'a' + k) % 26) + 'a';       
//         }
//         else if (s[i] >= 'A' && s[i] <= 'Z'){  
//             s[i] = ((s[i] - 'A' + k) % 26) + 'A';
//         }
//     }
//     cout << s << endl;
//     return 0;
// }
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
      int **a, row,col,i,j,k,s1=0,s2=0;
      scanf("%d",&row);
      col = row;
      a=(int *)malloc(row*sizeof(int));
      for(i=0;i<row;i++)
      {
            a[i]=(int *)malloc(col*sizeof(int));
      }

      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  scanf("%d",&a[i][j]);
            }
      }
      for(k=0;k<col;k++)
      {

            s1=s1+a[k][k];
      }

      for(i=0,j=col-1;i<row&&j>=0;i++,j--)
      {

            s2=s2+a[i][j];
      }

      printf("%d",s1+s2);

}




