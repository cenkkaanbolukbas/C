#include<stdio.h>
#include<stdlib.h>
double convert(int m[],double para1[]){
  
   double dollar;
   int i;
   dollar=5.8;
   for(i=0;i<5;i++){
   	para1[i]=m[i]/dollar;
   }
   
}


int main(){
	
    int money[5],i;
    double para2[5];

	printf("Enter TL value of 5 customers: ");
	for(i=0;i<5;i++){
	scanf("%d",&money[i]);
    }  
	convert(money,para2);
	
	printf("\nAccount 0 has %lf Dollars",para2[0]);
	printf("\nAccount 1 has %lf Dollars",para2[1]);
	printf("\nAccount 2 has %lf Dollars",para2[2]);
	printf("\nAccount 3 has %lf Dollars",para2[3]);
	printf("\nAccount 4 has %lf Dollars",para2[4]);
	
	
	return 0;
}
