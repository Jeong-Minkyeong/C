#include <stdio.h>

char* strcpy(char* dest, char* src) {
	int i;
	for (i = 0; src[i] != '\0'; i++) {
		dest[i] = src[i];

	}
	dest[i] = '\0';
	return dest;

}
int strcmp(char* x, char* y) { 
	for (int  i = 0; x[i] != '\0'; i++)
	{
		if (x[i] < y[i])
			return -1;

		else if (x[i] > y[i])
			return 1;

		else if (x[i] == y[i])
		{
		}

		  

	}
	return 0;
}

char* strcat(char* dest, char* src) {
	char* temp = dest;
	for (int i = 0; *temp != '\0'; i++) {
		temp++; 
	}
	int x;
	for (x = 0; src[x] != '\0'; x++)
	{
		temp[x] = src[x];
 }
	temp[x] = '\0';
	return dest;
}

/*void swap(char* a, char* b) {
	char temp = *a;
    *a = *b;
	*b = temp;
}*/

int main(void) {
	char a[10] ="927";
	char b[10]= "981";
	/*printf("%s\n", strcpy(a,b)); // strcpy 예시
	printf("%s\n", strcat(a, b));  // strcat 예시 */
	printf("%d\n", strcmp(a, b));  // strcmp 예시 
	
	return 0;

}
