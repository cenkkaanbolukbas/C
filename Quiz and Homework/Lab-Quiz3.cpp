#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void anagram(char string1[],char string2[]){
	
	int i,j;
	int a=0;
	int b=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(string1[i]==string2[j]){
				a++;
			}
			else
			b++;
		}
	}
	if(a==5){
		printf("It's an Anagram");	
	}
	else
	printf("It's not an Anagram");
	
	
}




int main(){
	
	char string1[5],string2[5];
	
	printf("Enter two strings:");
	gets(string1);
	gets(string2);
	anagram(string1,string2);	
	
	
	
	
	
}
