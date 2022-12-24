#include<stdio.h>
void main(){
	int my_array[10];
	int num;
	int count;
	
	for(count=0;count<10;count++){
		
		printf("Enter your Num:");
		scanf("%d",&num);
		my_array[count]=num;
		
	}
	for(count=0;count<10;count++){
		if(my_array[count]%2==0){
			printf("%d is even  number\n",my_array[count]);
		}else{
			printf("%d is odd number\n",my_array[count]);
		}
	}

		
	
}