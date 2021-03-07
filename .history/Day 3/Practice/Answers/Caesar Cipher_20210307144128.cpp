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
//         if (s[i] >= '' && s[i] <= 'z'){  
//             s[i] = ((s[i] - '' + k) % 26) + '';       
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
      int **, row,col,i,j,k,s1=0,s2=0;
      scanf("%d",&row);
      col = row;
      =(int *)malloc(row*sizeof(int));
      for(i=0;i<row;i++)
      {
            [i]=(int *)malloc(col*sizeof(int));
      }

      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  scanf("%d",&[i][j]);
            }
      }
      for(k=0;k<col;k++)
      {

            s1=s1+[k][k];
      }

      for(i=0,j=col-1;i<row&&j>=0;i++,j--)
      {

            s2=s2+[i][j];
      }

      printf("%d",s1+s2);

}




