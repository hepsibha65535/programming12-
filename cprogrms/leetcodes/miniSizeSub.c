#include<stdio.h>
#include<limits.h>

int main(){

	int marray[] = {1,2,3,4,5};
	int size = sizeof(marray)/sizeof(marray[0]);
	int target = 10;
	int prefix[20]={0},count = 0,x = 0, sum = 0, totalsum = 0,mincount = INT_MAX;
	for(int i = size - 1 ;i >= 0;i--) {

		if(marray[i] == target){
			count = 1;
			printf(" target found it directly =  %d",count);
		}else if(marray[i] > target){
			continue;
		} else {
			sum+= marray[i];
			printf("sum  = %d\n", sum);
			count++;
			x = target - sum;
			for(int j =0; j < size;j++){
				if(i == j) continue;
				if(x == marray[j]) {  
					printf("x = %d\n",x);
					sum+=x;
				}
			}

			if(sum ==  target){
				printf("count value = %d\n", count); 
				if(mincount > count){
					mincount = ++count;
					count  = 0;
					printf(" min count value  =  %d \n",mincount);

				}

			}
		}




	}





}
