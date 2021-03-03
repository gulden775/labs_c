#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=1,b=3,c=2;
	a=b++;	
	printf("%d %d\n",a,b);
	a=b/c;
	printf("%d\n",a);
	
	printf("%d\n",!-45);
	printf("%hu\n",8>>2);  //сдвиг в право деление на 2 два раза. в лево  умножение на 2 два раза
	return 0;
}
