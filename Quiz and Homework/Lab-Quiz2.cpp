#include<stdio.h>
#include<stdlib.h>
int findMax(int numbers[][3],int size,int *odd,int *row){
	int i,k;
	
	
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			if(numbers[i][k]%2==1 && *odd<numbers[i][k]){
			*odd=numbers[i][k];
			*row=i;
			}
		}
	}
	
	
	
	
}

int main(){
	
	int numbers[3][3],i,k,odd,row;
	printf("Enter integer numbers:");
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			scanf("%d",&numbers[i][k]);
		}
	}
	findMax(numbers,3,&odd,&row);
	printf("Maximum odd number is: %d Row: %d",odd,row);
	
	
	
}
