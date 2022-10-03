#include<stdio.h>
#include<conio.h>
main()
{
int x,s; char islem;
printf("klavyeden bir sayi giriniz= ");
scanf("%d",&x);

sec:
puts("\n*** MENU ***");
puts("a = alt kume sayisini hesaplar");
puts("o = oz alt kume sayisini hesaplar");
puts("f = faktoriyelini hesaplar");
puts("i = isminizi girilen sayi kadar ekrana yazdirir\n");

printf("Yapmak Istediginiz islemi giriniz= ");
islem=getche();
printf("\n\n");

switch(islem)
{
case 'a':
{
int alt=1;
for(s=0;s<x;s++)
alt=alt*2;
printf("altkume sayisi=%d",alt);
}
break;
case 'o':
{
int alt=1,ozalt;
for(s=0;s<x;s++)
alt=alt*2;
ozalt=alt-1;
printf("ozaltkume sayisi=%d",ozalt);
}
break;
case 'f':
{
int fak=1;
for(s=1;s<=x;s++)
fak*=s;
printf("Faktoriyeli= %d",fak);
}
break;
case 'i':
{
for(s=0;s<x;s++)
printf("%d- Serkan\n",s+1);
}
break;
default:
printf("Yanlis girdiniz Lufen asagidaki menuden tekrar secim yapin\n");
goto sec;
}

getch();
}
