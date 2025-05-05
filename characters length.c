#include<stdio.h>
#include<string.h>
int main () {
	char a[100];
	int count = 0;
	fgets(a,sizeof(a),stdin);
	printf("%s",a);
	for(int i = 0; i < strlen(a); ++i){
		if(a[i] >= 'a' && a[i] <= 'z'){
			
			count++;
			printf("%c\n",a[i]);
		}
		
	
	}
	printf("the no. of words : %d", count);
}
