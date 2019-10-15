#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void square(int n)
{
	n=n*n;
}

int main(int argc, char *argv[]) {
	int x, y;
	int output;
	
	x=2;
	y=5;
	square(x);
	
	printf("square : %i/n", x);
	return 0;
}



