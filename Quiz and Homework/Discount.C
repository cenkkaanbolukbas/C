#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){

char clubname;
int days,kisisayisi;
double B,S,Z,T,discount1,discount2,discount3,discount4,discountB,discountS,discountZ,discountT;

printf("Enter Club Name:");
scanf("%c",&clubname);
printf("\nEnter number of days to stay:");
scanf("%d",&days);


kisisayisi=5;
B=24.95*days*kisisayisi;
S=57.85*days*kisisayisi;
Z=47.70*days*kisisayisi;
T=72.00*days*kisisayisi;
discount1=kisisayisi*3.5/100;
discount2=kisisayisi*1.78/100;
discount3=kisisayisi*7.40/100;
discount4=kisisayisi*6.30/100;
discountB=24.95*days*kisisayisi-discount1;
discountS=57.85*days*kisisayisi-discount2;
discountZ=47.70*days*kisisayisi-discount3;
discountT=72.00*days*kisisayisi-discount4;




if(clubname=='B')
{
				 if(days>7){
							printf("\nCost of the vacation: $%f\n",discountB);
							printf("\nSimpsons can stay in Club B");}
                 else{
                            printf("\nCost of the vacation: $%f\n",B);
                            printf("\nSimpsons can stay in Club B");}
}

else if(clubname=='S')
{
                 if(days>7){
							printf("\nCost of the vacation: $%f\n",discountS);
							printf("\nSimpsons can stay in Club S");}
                 else{
                            printf("\nCost of the vacation: $%f\n",S);
                            printf("\nSimpsons can stay in Club S");}
}

else if(clubname=='Z')
{
                 if(days>7){
							printf("\nCost of the vacation: $%f\n",discountZ);
							printf("\nSimpsons can stay in Club Z");}
                 else{
                            printf("\nCost of the vacation: $%f\n",Z);
                            printf("\nSimpsons can stay in Club Z");}
}

if(clubname=='T')
{
                 if(days>7){
							printf("\nCost of the vacation: $%f\n",discountT);
							printf("\nSimpsons can stay in Club T");}
                 else{
                            printf("\nCost of the vacation: $%f\n",T);
                            printf("\nSimpsons can stay in Club T");}
}


getch();
return 0;
}
