// 160309041 CENK KAAN BÖLÜKBAÞ HW-1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int calculate(int section1[],int section2[],int section3[],int section4[],int averages[],int sum[],int *highestaverage){
	
	int k;
	*highestaverage=0;
	
	    for(k=0;k<4;k++){ // I know that when we don't enter the values, each indexes of array are 0. But my computer miscalculated so I had to do this.
	    	sum[k]=0;
		}
		for(k=0;k<10;k++){           // Having the sum of section1.
			sum[0]+=section1[k];
		}
	    for(k=0;k<10;k++){           // Having the sum of section2.
			sum[1]+=section2[k];
		}
		for(k=0;k<10;k++){           // Having the sum of section3.
			sum[2]+=section3[k];
		}
		for(k=0;k<10;k++){           // Having the sum of section4.
			sum[3]+=section4[k];
		}
	   for(k=0;k<4;k++){             // Finding averages.
	    	averages[k]=sum[k]/10;
	    } 
	   for(k=0;k<4;k++){             // Finding highest average.
	   	if(*highestaverage<averages[k]){
	   	   *highestaverage=averages[k];} 
        }
      
}

int main(){   
	
	int i,k,highestaverage,winnersection;
	int z=0;
	int section1[10],section2[10],section3[10],section4[10],averages[4],sum[4];
	
	printf("Enter grades of section 1 : ");  
	for(k=0;k<10;k++){                               // Input grades for Section 1.
		scanf("%d",&section1[k]);
		}
    printf("Enter grades of section 2 : ");
	for(k=0;k<10;k++){                              // Input grades for Section 2.
		scanf("%d",&section2[k]);
		}
	printf("Enter grades of section 3 : ");
	for(k=0;k<10;k++){                              // Input grades for Section 3.
		scanf("%d",&section3[k]);
		}	
	printf("Enter grades of section 4 : ");
	for(k=0;k<10;k++){                              // Input grades for Section 4.
		scanf("%d",&section4[k]); 
		}
	calculate(section1,section2,section3,section4,averages,sum,&highestaverage);  // Call the function
	
	printf("\nThe Averages of the sections : \n");
	
    for(i=0;i<4;i++){                                 // Printing the averages of each section.
    	z++;
    	printf("Section %d : %d\n",z,averages[i]);    
        }
    for(k=0;k<4;k++){                                 // Finding winnersection.
	    if(averages[k]<averages[k+1])
	    winnersection++;
    	}
    
         
    printf("Section %d has the highest average : %d",winnersection,highestaverage);   // Printing the winner and highest average.

}
