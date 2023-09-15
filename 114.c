#include <stdio.h>

void main() {
	char ary[5];
	int i;
	printf("\nEnter string: ");
	scanf("%s", ary);
	printf("\nThe tring is %s \n\n", ary);
	
	for (i = 0; i < 5; i++)
	printf("\t%d", ary[i]);
}
