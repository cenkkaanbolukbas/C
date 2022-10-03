
// CENK KAAN BÖLÜKBAÞ 160309041

#include <stdio.h>
#include <string.h>
#include<conio.h>


 // Ortalama Fonksiyonu

int A,B,C,D,F = 0;
int Ortalama(int birinci, int ikinci , int ucuncu){
    return ((birinci*25/100)+(ikinci*35/100)+(ucuncu*40/100));
}

// Harf Notu Sýnýflandýrmasý

char HarfNotu(int Ortalama){
    char Harf;
    if(Ortalama>89 && Ortalama<101){
     printf("Your average is: %d\n",Ortalama);
     printf("Your letter grade is A.\n");
     A++;
    }
    else if (Ortalama>79 && Ortalama<90){
    printf("Your average is: %d\n",Ortalama);
    printf("Your letter grade is B.\n");
    B++;
    }
    else if (Ortalama>59 && Ortalama<70){
    printf("Your average is: %d\n",Ortalama);
    printf("Your letter grade is C.\n");
    C++;
    }
    else if (Ortalama < 60){
    printf("Your average is: %d\n",Ortalama);
    printf("Your letter grade is D.\n");
    D++;
    }
    else{
    printf("Your average is: %d\n",Ortalama);
    printf("Your letter grade is F.\n");
    F++;
    }

    return Harf;
}

// Bar Chart Fonksiyonu

void charwrite(char Harf,int Sayi){
    printf("%c | ",Harf);
    for (int i = 0; i < Sayi; i++){
        printf("*");
    }
    printf("\n");
}

int main()
{
    int KisiSayisi;
    printf("How much do you want to enter number of students: ");
    scanf("%d",&KisiSayisi);
    // Array Data
    int VeriDeposu[KisiSayisi][4];
    char HarfDeposu[KisiSayisi];
    for(int x = 0; x<KisiSayisi;x++){
        for(int y = 0; y<3;y++){
            printf("\ Enter three test scores: ",x,y);
            scanf("%d",&VeriDeposu[x][y]);
        }
        VeriDeposu[x][3] = Ortalama(VeriDeposu[x][0],VeriDeposu[x][1],VeriDeposu[x][2]);
        HarfDeposu[x] = HarfNotu(VeriDeposu[x][3]);
    }

    int SinifOrtalamasi = 0;
    for (int x = 0; x < KisiSayisi; x++){
        printf("\nEnter three test scores : %d %d %d\n",VeriDeposu[x][0],VeriDeposu[x][1],VeriDeposu[x][2]);
        printf("Your average is %d\n",VeriDeposu[x][3]);
        SinifOrtalamasi +=VeriDeposu[x][3];
    }

	// Toplam grade sayýlarý
    printf("\nNumber of A grades:  %d\n",A);
    printf("Number of B grades:  %d\n",B);
    printf("Number of C grades:  %d\n",C);
    printf("Number of D grades:  %d\n",D);
    printf("Number of F grades:  %d\n",F);

    printf("\nTotal Number of students : %d\n",KisiSayisi );
    printf("Class avarage : %d\n",(SinifOrtalamasi/KisiSayisi));

	  // Bar Chart
    printf("\nBAR CHART :\n");
    charwrite('A',A);
    charwrite('B',B);
    charwrite('C',C);
    charwrite('D',D);
    charwrite('F',F);

getch();
return 0;
}

