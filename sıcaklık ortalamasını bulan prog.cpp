#include<stdio.h>
#include<conio.h>

int s=0,n,toplam=0;
float ort=0;

float sicaklik(int n) //Fonksiyon
{
printf("Aydaki gun sayisini girin=");
scanf("%d",&n);
int gun[n];
do
{
printf("%d. gunun sicaklik degerini giriniz=",s+1);
scanf("%d",&gun[s]);
toplam+=gun[s];
s++;
}
while(s<n);
ort=(float)toplam/n;
return ort;
}

main() //Ana Program
{
printf("gunun sicaklik ortalamasi %f'dir",sicaklik(n));
getch();
}
