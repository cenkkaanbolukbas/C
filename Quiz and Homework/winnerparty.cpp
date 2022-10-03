#include<stdio.h>
#include<stdlib.h>
int calculate(int pt_oy[]){
	
	int i;
	int toplamoy=0;
	int winnerparty=0;
	int percentarray[5];
	int winnerpercent=0;
	
	for(i=0;i<5;i++){	
	 toplamoy+=pt_oy[i];	
	}
	
	for(i=0;i<5;i++){
		percentarray[i]=pt_oy[i]*100/toplamoy;
	}
	
	for(i=0;i<5;i++){
		if(winnerparty<pt_oy[i])
		winnerparty=pt_oy[i];
	}
	
	for(i=0;i<5;i++){
		if(winnerpercent<percentarray[i])
		winnerpercent=percentarray[i];
	}
    
    printf("\nWinner Party has: %d percent",winnerpercent);
    printf("\nWinner Party has: %d votes",winnerparty);
	
}


int main(){
	
	int pt_oy[5],i;
	
	printf("Enter the votes of 5 Party:");
	for(i=0;i<5;i++){
		scanf("%d",&pt_oy[i]);
	}
	calculate(pt_oy);
	
	
	
	return 0;
}
