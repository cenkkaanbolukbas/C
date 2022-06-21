#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct account{
	
	int bakiye;
	char type[10];
	
};

struct customer{
	
	char name[20];
	struct account account[10];
	
};

int main(){
	
	struct customer customer;
	int accountnumber,k=1,i,withdrawal;
	char moneytype[10];
	
	printf("Enter the name of the customer : ");
	gets(customer.name);
	printf("Enter the number of account : ");
	scanf("%d",&accountnumber);
	for(i=0;i<accountnumber;i++){
	printf("Enter the %d account balance and type : ",k);
	scanf("%d %s",&customer.account[i].bakiye,&customer.account[i].type);
	k++;
	}
    
    printf("Enter the amount of withdrawal and the name of the acoount : ");
    scanf("%d %s",&withdrawal,&moneytype);
    for(i=0;i<accountnumber;i++){
    if(strcmp(moneytype,customer.account[i].type)==0){
    	customer.account[i].bakiye=(customer.account[i].bakiye)-withdrawal;
	}
}
	printf("Final Account information : ");
	for(i=0;i<accountnumber;i++){
	printf("%d \n",customer.account[i].bakiye);
}
	
	
	
	
}
