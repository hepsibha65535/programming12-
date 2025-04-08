#include<stdio.h>

char* strgcat(char* ,const char *);
int main(){

	char str[20]= "ganga";
	char * ptr =  strgcat(str,"kakadi");
	printf("%s",ptr);


}


char* strgcat(char*dst, const char *src){

	int i = 0;
	char * ptr = dst;
	while(*ptr != '\0'){
		++ptr;
	}
	for(i = 0; src[i] != '\0';i++){

		ptr[i] = src[i];
	}
         ptr[i] = '\0';
	return dst;
}
