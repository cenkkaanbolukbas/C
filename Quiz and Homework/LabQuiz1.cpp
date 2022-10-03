#include<stdio.h>
#include<stdlib.h>
int calculate(double m[],double para[]){
	double dollar=5.8;
	int i;
	for(i=0;i<5;i++){
		para[i]=m[i]/dollar;
	}	

}
int main(){
	double money[5];
	double para[5];
	int i;
	
	printf("Enter TL of customers money:");
	for(i=0;i<5;i++){
	scanf("%lf",&money[i]);}
	calculate(money,para);
	for(i=0;i<5;i++){
	printf("\nAccount %d has money:%2lf",i,para[i]);
    
}
	
	
	
	
	return 0;
}
