
#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>
main()
{
char secim,bas;
int bs,is,s;
deneme:
printf("\nbirinci sayiyi giriniz=");
scanf("%d",&bs);
printf("\nikinci sayiyi giriniz=");
scanf("%d",&is);
printf("\nislem turunu seciniz="); 
secim=getche();
switch(secim)
{
case '+':s=bs+is;break;
case '-':s=bs-is;break;
case '*':s=bs*is;break;
case '/':s=bs/is;break;
default:printf("\nhatali giris"); getch(); exit(0);
}
printf("\n Sonuc=%d",s);
printf("\nDevam etmek istiyormusun(E/e)'ye basiniz=");
bas=getche();
if(bas=='E'||bas=='e')
goto deneme;
else
exit(1); 
}
