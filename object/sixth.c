//macro expansion
//Header file
#include<stdio.h>

//Macros
#define SUM 1 + 2 + 3 + 4
#define xstr(s) str(s)
#define str(s) #s


//main function
int main(void){
	int result1,result2;
	result1=SUM+10;
	printf("\n%s+10=%d",xstr(SUM),result1);
	result2=SUM*10;
	printf("\n%s*10=%d\n",xstr(SUM),result2);
	//return
	return 0;
}//end of main
