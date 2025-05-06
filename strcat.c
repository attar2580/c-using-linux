#include<stdio.h>
#include<string.h>

void my_strcat(char *s1, char *s2){
	char *ptr = s1;
	while(*ptr != '\0'){
		ptr++;
	}

	while(*s2 != '\0'){
		*ptr = *s2;
		ptr++;
		s2++;

}
}

int main() {
	char s1[1000], s2[1000];
	printf("Enter the 1st string : ");
	fgets(s1, sizeof(s1), stdin);

	printf("enter the 2nd string : ");
	fgets(s2, sizeof(s2), stdin);

	my_strcat(s1, s2);
	printf("Concatenated string : %s\n", s1);
}

