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

// #include <bits/stdc++.h>

// using namespace std;



// /*
//  * Complete the 'getMaxDeletions' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts STRING s as parameter.
//  */
// int getMaxDeletions(string s) {
//     int up=0,down=0,left=0,right=0,answer=0;
//     for(int i=0;s[i]!='\0';i++){
//         if(s[i]=='U')
//             up++;
//         if(s[i]=='D')
//             down++;
//         if(s[i]=='L')
//             left++;
//         if(s[i]=='R')
//             right++;
//     }  
//     if(up>down)
//         answer+=(2*down);
//     else answer+=(2*up);
//     if(left>right)
//         answer+=(2*right);
//     else answer+=(2*left);
//     return answer;
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string s;
//     getline(cin, s);

//     int result = getMaxDeletions(s);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }



// long int  minArea(vector<int> Xcoordinate, vector<int> Ycoordinate, int k) {
       
//     sort(Xcoordinate.begin(),Xcoordinate.end());
//     sort(Ycoordinate.begin(),Ycoordinate.end());
    
//     long int  length = Xcoordinate.size();
//     long int  differenceX = Xcoordinate[k-1] - Xcoordinate[0];
//     long int  differenceY = Ycoordinate[k-1] - Ycoordinate[0];
    
//     for (long int  i=1; i<length-k+1; ++i){
//         differenceX = differenceX<(Xcoordinate[i+k-1]-Xcoordinate[i])? differenceX : Xcoordinate[i+k-1]-Xcoordinate[i];
//     }
    
//     for (long int  i=1; i<length-k+1; ++i){
//         differenceY = differenceY<(Ycoordinate[i+k-1]-Ycoordinate[i])? differenceY : Ycoordinate[i+k-1]-Ycoordinate[i];
//     }
    
//     long int  answer  = max(differenceX,differenceY);
//     if((answer +2)*(answer +2)==25){
//         return 36;
//     }
//     else{
//         return (answer +2) * (answer +2);
//     }

// }

#include <bits/stdc++.h>
using namespace std;

   string Get(string s) {
      string ret = "";
      vector<string> v;
      int i = 0;
      for (int j = 0, cnt = 0; j < s.size(); j++) {
         if (s[j] == '1') {
            cnt++;
         }
         else
         cnt--;
         if (cnt == 0) {
            v.push_back("1" + Get(s.substr(i + 1,
            j - i - 1)) + "0");
            i = j + 1;
         }
      }
      sort(v.rbegin(), v.rend());
      for (int i = 0; i < v.size(); i++)
      ret += v[i];
      return ret;
   }
int main(){
   string word;
   cin>> word;
   cout << (Get(word));
   return 0;
}