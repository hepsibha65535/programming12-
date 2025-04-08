#include<stdio.h>
#include<stdlib.h>

typedef struct{

int* prefixsum;
int  size;
}Numarray;

Numarray * obj;

Numarray* numarraycreate(int* nums, int numsize);
int arraySumRange(Numarray * obj, int left , int right);
void numarrayFree(Numarray * obj);
int main(void){

   int nums[] = {-2,0,3,-5,2,-1};
   int size =  sizeof(nums)/sizeof(nums[0]);
   Numarray * ptr = numarraycreate(nums,size);
   printf(" %d \n", arraySumRange(ptr,0,2));
   printf(" %d \n", arraySumRange(ptr,2,5));
   printf(" %d \n", arraySumRange(ptr,1,5));
   numarrayFree(ptr);
   return 0;

}

Numarray* numarraycreate(int* nums, int numsize){
  
            obj = (Numarray*)malloc(sizeof(Numarray));
	    if(obj == NULL){
	       return NULL;
	    }
	    obj->size = numsize + 1;
	    obj->prefixsum = (int*)malloc(sizeof(int)*obj->size); 
            if(obj->prefixsum == NULL){
	       return NULL;
	    }
	    obj->prefixsum[0] = 0;
           for(int i = 0; i < numsize; i++){
#if 0
		   obj->prefixsum[i] = nums[i];
#else 
		   obj->prefixsum[i+1] = obj->prefixsum[i] + nums[i];
#endif
	   
	   }
           return obj;
}
int arraySumRange(Numarray * obj, int left , int right){
       
#if 1
       	return obj->prefixsum[right+1] - obj->prefixsum[left];
#else

	int sumrange = 0;
	for(int i = left; i <= right;i++){
	  sumrange += obj->prefixsum[i];
	}

	return sumrange;
#endif
}
void numarrayFree(Numarray * obj){

            free(obj->prefixsum);
	    free(obj);
}
