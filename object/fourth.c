#include<stdio.h>

#define	MAX1	SIZE
#define SIZE	10
#define	VALUES	0,1,2,3,4,5,6,7,8,9
#define NEWLINE	printf("\n");
int main(){
	int even_array[MAX1]={VALUES},i;

	for(i=0;i<SIZE;i++)
		printf("%d\t",even_array[i]);
	NEWLINE	
}
