#include<stdio.h>
void name();
int main(){
char name[30],ch ;
 printf("Enter any string:");
 int i=0;
  while(ch!="\n"){
ch=getchar();
name[i]=ch;

name[i]='\0';

printf("String:%s",name);

}
}
