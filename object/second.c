#include<stdio.h>
#define	INTEGER		int
#define	CONDITION	if

int main(){
	INTEGER a=30,b=20;

	CONDITION(a>b)
		printf("\n A is big\n");
	else
		printf("\n B is big\n");
}


