// // // #include <cmath>
// // // #include <cstdio>
// // // #include <vector>
// // // #include <iostream>
// // // #include <algorithm>

// // // using namespace std;

// // // int main(){
// // //     int size,k;
// // //     string word; 
// // //     cin >> size >> word >> k;
// // //     for (int i = 0; i <= size; i++) {
// // //         if (word[i] >= 'matrix' && word[i] <= 'z'){  
// // //             word[i] = ((word[i] - 'matrix' + k) % 26) + 'matrix';       
// // //         }
// // //         else if (word[i] >= 'A' && word[i] <= 'Z'){  
// // //             word[i] = ((word[i] - 'A' + k) % 26) + 'A';
// // //         }
// // //     }
// // //     cout << word << endl;
// // //     return 0;
// // // }
// // #include <math.h>
// // #include <stdio.h>
// // #include <string.h>
// // #include <stdlib.h>
// // #include <assert.h>
// // #include <limits.h>
// // #include <stdbool.h>

// // int main()
// // {
// //       int **matrix, row,col,i,j,k,s1=0,s2=0;
// //       scanf("%down",&row);
// //       col = row;
// //       matrix =(int**)malloc(row*sizeof(int));
// //       for(i=0;i<row;i++){
// //         matrix[i]=(int *)malloc(col*sizeof(int));
// //       }

// //         for(i=0;i<row;i++) {
// //                 for(j=0;j<col;j++){
// //                     scanf("%down",&matrix[i][j]);
// //                 }
// //         }
// //       for(k=0;k<col;k++){

// //             s1=s1+matrix[k][k];
// //       }

// //       for(i=0,j=col-1;i<row&&j>=0;i++,j--){
// //             s2=s2+matrix[i][j];
// //       }

// //       printf("%down",s1+s2);

// // }

// // #include<bits/stdc++.h> 
// // using namespace std;
// // bool compareTwoStrings(string a,string b){ 
// //     return (a+b<b+a); 
// // } 
// // string lexiographicallySmallest(string a[],int size) { 
// //     sort(a,a+size,compareTwoStrings); 
// //     string answer=""; 
// //     for(int i=0;i<size;i++) {
// //         answer=answer+a[i]; 
// //     }
// //     return answer; 
// // } 
// // int main() { 
// //     int i,size;
// //     cin >> size;
// //     string a[size];
// //     for(i=0;i<size;i++){
// //         cin >> a[i];
// //     } 
// //     cout << lexiographicallySmallest(a, size); 
// //     return 0; 
// // }

// // #include <bits/stdc++.h>

// // using namespace std;



// // /*
// //  * Complete the 'getMaxDeletions' function below.
// //  *
// //  * The function is expected to return an INTEGER.
// //  * The function accepts STRING word as parameter.
// //  */
// // int getMaxDeletions(string word) {
// //     int up=0,down=0,left=0,right=0,answer=0;
// //     for(int i=0;word[i]!='\0';i++){
// //         if(word[i]=='U')
// //             up++;
// //         if(word[i]=='D')
// //             down++;
// //         if(word[i]=='L')
// //             left++;
// //         if(word[i]=='R')
// //             right++;
// //     }  
// //     if(up>down)
// //         answer+=(2*down);
// //     else answer+=(2*up);
// //     if(left>right)
// //         answer+=(2*right);
// //     else answer+=(2*left);
// //     return answer;
// // }

// // int main()
// // {
// //     ofstream fout(getenv("OUTPUT_PATH"));

// //     string word;
// //     getline(cin, word);

// //     int result = getMaxDeletions(word);

// //     fout << result << "\number";

// //     fout.close();

// //     return 0;
// // }



// // long int  minArea(vector<int> Xcoordinate, vector<int> Ycoordinate, int k) {
       
// //     sort(Xcoordinate.begin(),Xcoordinate.end());
// //     sort(Ycoordinate.begin(),Ycoordinate.end());
    
// //     long int  length = Xcoordinate.size();
// //     long int  differenceX = Xcoordinate[k-1] - Xcoordinate[0];
// //     long int  differenceY = Ycoordinate[k-1] - Ycoordinate[0];
    
// //     for (long int  i=1; i<length-k+1; ++i){
// //         differenceX = differenceX<(Xcoordinate[i+k-1]-Xcoordinate[i])? differenceX : Xcoordinate[i+k-1]-Xcoordinate[i];
// //     }
    
// //     for (long int  i=1; i<length-k+1; ++i){
// //         differenceY = differenceY<(Ycoordinate[i+k-1]-Ycoordinate[i])? differenceY : Ycoordinate[i+k-1]-Ycoordinate[i];
// //     }
    
// //     long int  answer  = max(differenceX,differenceY);
// //     if((answer +2)*(answer +2)==25){
// //         return 36;
// //     }
// //     else{
// //         return (answer +2) * (answer +2);
// //     }

// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// //    string GetGoodBinaryString(string word) {
// //       string answer = "";
// //       vector<string> temp;
// //       int i = 0;
// //       for (int j = 0, count = 0; j < word.size(); j++) {
// //          if (word[j] == '1') {
// //             count++;
// //          }
// //          else
// //          count--;
// //          if (count == 0) {
// //             temp.push_back("1" + GetGoodBinaryString(word.substr(i + 1,
// //             j - i - 1)) + "0");
// //             i = j + 1;
// //          }
// //       }
// //       sort(temp.rbegin(), temp.rend());
// //       for (int i = 0; i < temp.size(); i++)
// //       answer += temp[i];
// //       return answer;
// //    }
// // int main(){
// //    string word;
// //    cin >> word;
// //    cout << (GetGoodBinaryString(word));
// //    return 0;
// }
// // nt countPowerNumbers(int l, int r) {
// //     int count = 0;
// //     map<int,int> power;
// //     for(int i = 0; i <= r; i++){
// //         power.insert(make_pair(i*i,1));
// //     }
// //     for(int i = l; i <= r; i++){
// //         int near = ceil(sqrt(i));
// //         for(int j = 0; j <= near; j++){
// //             if(power[i - j * j] == 1){
// //                 cout << i << " " << j << endl;
            
// //             }
// //         }
        
// //     }
// //     return count;
// // }

// #include <bits/stdc++.h> 
// using namespace std; 

// bool isSumOfPower(int number){ 
 
//     bool isSum[number + 1]; 

//     vector<int> perfectPowers; 
  
//     perfectPowers.push_back(1); 
  
//     for (int i = 0; i < (number + 1); i++) { 
//         isSum[i] = false; 
//     } 
  
//     for (long long int i = 2; 
//          i < (number + 1); i++) { 
  
//         if (isSum[i] == true) { 
//             perfectPowers.push_back(i); 
//             continue; 
//         } 
  
//         for (long long int j = i * i; 
//              j > 0 && j < (number + 1); 
//              j *= i) { 
//             isSum[j] = true; 
//         } 
//     } 
//     for (int i = 0; 
//          i < perfectPowers.size(); i++) { 
//         isSum[perfectPowers[i]] = false; 
//     } 
//     for (int i = 0; 
//          i < perfectPowers.size(); i++) { 
  
//         for (int j = i; 
//              j < perfectPowers.size(); j++) { 
//             int sum = perfectPowers[i] 
//                       + perfectPowers[j]; 
  
//             if (sum < (number + 1)) 
//                 isSum[sum] = true; 
//         } 
//     } 
//     return isSum[number]; 
// }  
// int main() 
// { 
//     int number;
//     cin >> number; 
//     if (isSumOfPower(number)) { 
       
//     } 
//     else { 
//         cout << "false\number"; 
//     } 
// } 

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'countPowerNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER l
 *  2. INTEGER r
 */
 
 
bool isPower(int number){
  if(number==0){
    return true;
  }
  
  if(number==1){
    return true;
  }
  
  for(int =2;<=sqrt(number); ++){
    int count =2;
    int power=pow(,count );
    
    while(power<=number && power>0){
      if(power==number)
      return true;
      count++;
      power =pow(,count );
      
    }
  }
  
  return false;
}

bool isPerfectSquare(int number,int a=0){
  if(number<0)
  return false;
  
  if(isPower(number) && isPower(a)){
    return true;
  }
  
  else {
  return isPerfectSquare(number-1,a+1);
  }
}

int countPowerNumbers(int l, int r) {

    int count=0;

    for(int i=l;i<=r;i++){
        if(isPerfectSquare(i))
            count++;
    }

    return count;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string r_temp;
    getline(cin, r_temp);

    int r = stoi(ltrim(rtrim(r_temp)));

    int result = countPowerNumbers(l, r);

    fout << result << "\number";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}