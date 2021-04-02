#include<stdio.h>

int something(int number){
    if(number <= 0){
        return 1;
    }else{
        return number * something(number - 1)
    }
}

int main(){
    
}