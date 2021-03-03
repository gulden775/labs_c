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
	
	//n=n& int побитовое умножение вы
	
	// day3 размерность
	printf("size=%d\n",sizeof(2/4.1));
	printf("size=%d\n",sizeof(long int));
	printf("size=%d\n",sizeof(char));
	
	printf("size=%d\n",b/c);
	return 0;
}
