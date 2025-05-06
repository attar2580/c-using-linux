#include<stdio.h>
#include<string.h>

int main () {
	char line[1000];
	printf("Enter the Lines : \n");
	while(fgets(line, sizeof(line), stdin) != 0){
		printf("Your Entered lines : %s\n", line);
	}
}
