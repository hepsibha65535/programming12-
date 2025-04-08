#include<stdio.h>

char *strgncat(char*,const char*,int);
int main(){

	char string[20]= "ganga";

	char * str = strgncat(string,"mirafra",6);

	printf("%s",str);

	return 0;
}





char *strgncat(char* dst ,const char*src,int size){

	char * ptr = dst;
	int i = 0;
	while(*ptr != '\0'){
		ptr++;
	}

	for(i = 0; (i < size) &&( src[i] != '\0');i++){

		ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return dst;
}
