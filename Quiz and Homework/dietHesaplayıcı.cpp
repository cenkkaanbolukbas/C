#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int hesaplamakiloalma(int kg){
     int prt,carb,bazalmetabolizma,gereklicalories;

     prt=kg*1.5;
	 carb=kg*2;
	 bazalmetabolizma=kg*2.2*11;
	 gereklicalories=bazalmetabolizma*0.4+bazalmetabolizma;
     printf("\nBazal Metabolizma Hiziniz : %d kc",bazalmetabolizma);
	 printf("\nAlmaniz Gereken Gunluk Protein Miktari : %d gr",prt);
	 printf("\nAlmaniz Gereken Gunluk Calorie Miktariniz : %d",gereklicalories);
	 printf("\nAlmaniz Gereken Gunluk Carbonhydrate Miktari : %d gr",carb);
}

int hesaplamakiloverme(int kg){
     int prt,carb,bazalmetabolizma,gereklicalories;

     prt=kg*2;
	 carb=kg*1.5;
	 bazalmetabolizma=kg*2.2*11;
	 gereklicalories=bazalmetabolizma*0.4+bazalmetabolizma;
     printf("\nBazal Metabolizma Hiziniz : %d kc",bazalmetabolizma);
	 printf("\nAlmaniz Gereken Gunluk Protein Miktari : %d gr",prt);
	 printf("\nAlmaniz Gereken Gunluk Calorie Miktariniz : %d",gereklicalories);
	 printf("\nAlmaniz Gereken Gunluk Carbonhydrate Miktari : %d gr",carb);
 }


int main(){
char hedef;
int kg;
int boy;
int yas;

printf("Hedefinizi secin: A:Kilo almak , B:Kilo vermek  :");
scanf("%c",&hedef);
printf("Yasinizi Giriniz :");
scanf("%d",&yas);
printf("Boyunuzu Giriniz :");
scanf("%d",&boy);
printf("Kilonuzu Giriniz :");
scanf("%d",&kg);
if(hedef=='A'){
               hesaplamakiloalma(kg);
			   }
else{
	 hesaplamakiloverme(kg);
	 }




printf("\n\nNOTE:Bazal metabolizma hizi, vucut herhangi bir aktivite halinde degilken yaktigi enerjiye denir. ");


getch();
return 0;
}
