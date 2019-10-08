#include<stdio.h>

#define	EVENS	2,\
		4,\
		6,\
		8

#define	NEWLINE	printf("\n");
int main(){
	int even_array[]={EVENS},i;
	for(i=0;i<4;i++)
		printf("%d\t",even_array[i]);
	NEWLINE;
	return 0;
}
