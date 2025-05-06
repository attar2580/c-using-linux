#include<stdio.h>
#include<string.h>
int main () {
	char sen[100];
	printf("Enter the sentence : ");
	fgets(sen,sizeof(sen),stdin);
	printf("%s",sen);
}

