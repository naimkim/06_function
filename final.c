#include <stdio.h>
#include <stdlib.h>
int square(int n);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main(void)
 {
 	int result;
 	result=square(5);
 	printf("%d", result);
 }
 int square(int n)
 {
 	return (n*n);
 }
	


