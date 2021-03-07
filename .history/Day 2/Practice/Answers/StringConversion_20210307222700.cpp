#include<bits/stdc++.h>
using namespace std;

void printZigZagConcat(string str, int n)
{
    if (n == 1){
        cout << str;     
        return;
    } 

    int len = str.length();

    string arr[n];

    int row = 0;
    bool down;
           

    for (int i = 0; i < len; ++i){
        arr[row].push_back(str[i]);

        if (row == n-1)
        down = false;

        else if (row == 0)
        down = true;
        (down)? (row++): (row--);
    }

    for (int i = 0; i < n; ++i)
        cout << arr[i];
}

// Driver program
int main()
{
    char str[100];
     int n;
    scanf("%s",&str);
    scanf("%d",&n);
   
    printZigZagConcat(str, n);
    return 0;
}