// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>

// // using namespace std;

// // int main(){
// //     int size,k;
// //     string word; 
// //     cin >> size >> word >> k;
// //     for (int i = 0; i <= size; i++) {
// //         if (word[i] >= 'matrix' && word[i] <= 'z'){  
// //             word[i] = ((word[i] - 'matrix' + k) % 26) + 'matrix';       
// //         }
// //         else if (word[i] >= 'A' && word[i] <= 'Z'){  
// //             word[i] = ((word[i] - 'A' + k) % 26) + 'A';
// //         }
// //     }
// //     cout << word << endl;
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
//  * The function accepts STRING word as parameter.
//  */
// int getMaxDeletions(string word) {
//     int up=0,down=0,left=0,right=0,answer=0;
//     for(int i=0;word[i]!='\0';i++){
//         if(word[i]=='U')
//             up++;
//         if(word[i]=='D')
//             down++;
//         if(word[i]=='L')
//             left++;
//         if(word[i]=='R')
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

//     string word;
//     getline(cin, word);

//     int result = getMaxDeletions(word);

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

// #include <bits/stdc++.h>
// using namespace std;

//    string GetGoodBinaryString(string word) {
//       string answer = "";
//       vector<string> temp;
//       int i = 0;
//       for (int j = 0, count = 0; j < word.size(); j++) {
//          if (word[j] == '1') {
//             count++;
//          }
//          else
//          count--;
//          if (count == 0) {
//             temp.push_back("1" + GetGoodBinaryString(word.substr(i + 1,
//             j - i - 1)) + "0");
//             i = j + 1;
//          }
//       }
//       sort(temp.rbegin(), temp.rend());
//       for (int i = 0; i < temp.size(); i++)
//       answer += temp[i];
//       return answer;
//    }
// int main(){
//    string word;
//    cin >> word;
//    cout << (GetGoodBinaryString(word));
//    return 0;
}
// nt countPowerNumbers(int l, int r) {
//     int count = 0;
//     map<int,int> power;
//     for(int i = 0; i <= r; i++){
//         power.insert(make_pair(i*i,1));
//     }
//     for(int i = l; i <= r; i++){
//         int near = ceil(sqrt(i));
//         for(int j = 0; j <= near; j++){
//             if(power[i - j * j] == 1){
//                 cout << i << " " << j << endl;
            
//             }
//         }
        
//     }
//     return count;
// }

import os
def RomantoInt(m):
    roman = {'I':1,'V':5,'X':10,'L':50,'C':100}
    i=0;
    num=0;
    for i in range(len(m)):
        if i>0 and roman[m[i]]>roman[m[i-1]]:
            num = num+ (roman[m[i]] - 2*roman[m[i-1]])
        else:
            num = num+(roman[m[i]])
    return num

def sortRoman(names):
    # Write your code here
    n,r = names.split()
    return n, RomantoInt(r)



fptr = open(os.environ['OUTPUT_PATH'], 'w')

names_count = int(input().strip())

names = []

for _ in range(names_count):
    names_item = input()
    names.append(names_item)
        
result = sorted(set(names),key=sortRoman)

fptr.write('\n'.join(result))
fptr.write('\n')

fptr.close()