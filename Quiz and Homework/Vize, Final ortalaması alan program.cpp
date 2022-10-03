
#include<stdio.h>
#include<conio.h>
main(){
       int vize,final,ort;
       printf("Vizeyi Giriniz=");
       scanf("%d",&vize);
       printf("Finali Giriniz=");
       scanf("%d",&final);
       ort=vize*0.4+final*0.6;
       if(ort>44 && final>44)
       printf("gecti");
       else
       printf("kaldi");
       printf("\nortalamaniz=%d",ort);
       getch();}
