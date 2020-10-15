#include <stdio.h>


int main(void) {

	char str1[] = "hello";
	char str2[6];

	strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;

}

