#include<stdio.h>
#define MAXSIZE   1024
int  strglen(const char * string);
int main(void){

 char str[MAXSIZE]={0};
 int length =0;
 printf("enter the string");
 scanf("%s",str);
 length = strglen(str);
 printf("string length is = %d",length);
}


int  strglen(const char * str){

 char * ptr = str;
 for(;(*ptr) != '\0';ptr++);
	return (ptr - str);
}
