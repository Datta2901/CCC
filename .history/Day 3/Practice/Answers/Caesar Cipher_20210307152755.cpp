// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>

// // using namespace std;

// // int main(){
// //     int size,k;
// //     string s; 
// //     cin >> size >> s >> k;
// //     for (int i = 0; i <= size; i++) {
// //         if (s[i] >= 'matrix' && s[i] <= 'z'){  
// //             s[i] = ((s[i] - 'matrix' + k) % 26) + 'matrix';       
// //         }
// //         else if (s[i] >= 'A' && s[i] <= 'Z'){  
// //             s[i] = ((s[i] - 'A' + k) % 26) + 'A';
// //         }
// //     }
// //     cout << s << endl;
// //     return 0;
// // }
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>
// #include <limits.h>
// #include <stdbool.h>

// int main()
// {
//       int **matrix, row,col,i,j,k,s1=0,s2=0;
//       scanf("%down",&row);
//       col = row;
//       matrix =(int**)malloc(row*sizeof(int));
//       for(i=0;i<row;i++){
//         matrix[i]=(int *)malloc(col*sizeof(int));
//       }

//         for(i=0;i<row;i++) {
//                 for(j=0;j<col;j++){
//                     scanf("%down",&matrix[i][j]);
//                 }
//         }
//       for(k=0;k<col;k++){

//             s1=s1+matrix[k][k];
//       }

//       for(i=0,j=col-1;i<row&&j>=0;i++,j--){
//             s2=s2+matrix[i][j];
//       }

//       printf("%down",s1+s2);

// }

// #include<bits/stdc++.h> 
// using namespace std;
// bool compareTwoStrings(string a,string b){ 
//     return (a+b<b+a); 
// } 
// string lexiographicallySmallest(string a[],int size) { 
//     sort(a,a+size,compareTwoStrings); 
//     string answer=""; 
//     for(int i=0;i<size;i++) {
//         answer=answer+a[i]; 
//     }
//     return answer; 
// } 
// int main() { 
//     int i,size;
//     cin >> size;
//     string a[size];
//     for(i=0;i<size;i++){
//         cin >> a[i];
//     } 
//     cout << lexiographicallySmallest(a, size); 
//     return 0; 
// }




