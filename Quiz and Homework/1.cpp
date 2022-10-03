#include<stdio.h>
#include<stdlib.h>
int function(int gradeofsection[][10],int size,int averageofgrade[],int sumofaverages[],int *haverage,int *win){
	int f,b; // variables for loops
	for(f=0;f<4;f++){   // I know that when we don't input value at each of array indexes, all the indexes are 0 but my computer miscalculated so I did it.
		sumofaverages[f]=0;}
	for(f=0;f<4;f++){  
		for(b=0;b<10;b++){  
			sumofaverages[f]+=gradeofsection[f][b];}}
	averageofgrade[0]=sumofaverages[0]/10;
	averageofgrade[1]=sumofaverages[1]/10;
	averageofgrade[2]=sumofaverages[2]/10;
	averageofgrade[3]=sumofaverages[3]/10;
	*haverage=0;
	*win=0;
	for(f=0;f<4;f++){  
		if(*haverage<averageofgrade[f]){
			*haverage=averageofgrade[f];
			*win=f;	}}         }
int main(){   
	int gradeofsection[4][10],averageofgrade[4],sum[4],f,b,haverage,win;
	for(f=0;f<4;f++){ // getting grades  
		printf("Enter the grades of section %d: ",f);
		for(b=0;b<10;b++){
		scanf("%d",&gradeofsection[f][b]);} }	
	function(gradeofsection,4,averageofgrade,sum,&haverage,&win); // function
	printf("\nThe Averages of the sections : \n");
	for(f=0;f<4;f++){ // print the average of grades each section
	   printf("Section%d: %d\n",f,averageofgrade[f]);}    
    printf("Section %d has the highest average : %d",win,haverage);   
}

