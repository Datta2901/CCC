#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin >> name;
    int vowelCount = 0;
    for(int i = 0; i < name.length(); i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'|| name[i] == 'A' || name[i] == 'E' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            vowelCount++;
        }
    }
    float answer = ((float)(vowelCount) / name.size()) *100;
    cout << fixed << setprecision(4) << answer << endl;
    return 0;
}