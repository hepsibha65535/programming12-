#include<stdio.h>
#include<stdlib.h>
int* productExceptSelf(int* nums, int numsSize);
int main(void){
	int numsSize = 0;
	printf("enter the size of the array");
	scanf("%d",&numsSize);
	int *nums = malloc(sizeof(numsSize * sizeof(int)));
	if(nums == NULL){
		printf("failed create memory");
		return -1;
	}
	printf("eneter the elements");
	for(int i = 0; i < numsSize; i++){
		scanf("%d",&nums[i]);
	}
	int * ptr =  productExceptSelf( nums,numsSize);
	for(int i =0;i< numsSize;i++){
		printf("%d",ptr[i]);
	}
	return 0;

}

int* productExceptSelf(int* nums, int numsSize){

	int * answerArray = malloc(sizeof(int)*numsSize);
	int i, j, rightproduct = 1;

	for( i = 0; i < numsSize;i++){
		answerArray[i] = 1;
	}

	for( i = 1; i < numsSize; i++){
		answerArray[i] = answerArray[i - 1] * nums[i - 1];
	}

	for(i = numsSize -1; i >= 0; i--){
		answerArray[i]*=rightproduct;
		rightproduct*=nums[i];
	}
	return answerArray;
}
