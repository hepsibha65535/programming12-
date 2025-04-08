#include<stdio.h>

#define MAX 10

int hepsibha = 20;
static int ganga = 100;

int main(void){
    static int ganga = 23;
    int kakadi = 5;
    int riyaz[1] = {2};
#ifdef MAX
    kakadi = kakadi + MAX;
#else
    kakadi = kakadi - MAX;
#endif
    return 0;
}
