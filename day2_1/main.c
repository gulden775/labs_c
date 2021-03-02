#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float			f=1.0f;	  		scanf("%f",&f);			printf("%f\n",f);
	fflush(stdin);
	unsigned char	c='!';			scanf("%c",&c);	   		printf("%c\n",c);
	long long		l=2LL;			printf("%lld\n",l);
	double 			d=.6345;		printf("%f\n",d);  //("%g\n",d);
	
	short			h=3,n=4,m=5;	printf("%i\n",h);
	scanf("%hi %hi %hi",&h,&n,&m);
	printf("%i %i %i\n",h,n,m);
									printf("%s\n","hello Привет");
	
	
	
	return 0;
}
