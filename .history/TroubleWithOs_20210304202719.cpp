// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     long long int count = 0,product = 1;
//     while(t--){
//         long long int n;
//         cin >> n;
//         while(n % 10 == 0){
//             count++;
//             n /= 10;
//         }
//         product *= n;
//         string a = to_string(product);
//         cout <<   +to_string(('0' * count));
//     }
// }


// CPP program to illustrate 
// std::to_string 
#include <bits/stdc++.h> 
  
// Driver code 
int main() 
{ 
  
    // Converting float to string 
    std::string str1 = std::to_string(12.10); 
  
    // Converting integer to string 
    std::string str2 = std::to_string(9999); 
  
    // Printing the strings 
    std::cout << str1 << '\n'; 
    std::cout << str2 << '\n'; 
    return 0; 
} 