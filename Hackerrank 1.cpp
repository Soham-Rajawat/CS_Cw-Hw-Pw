.#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int P,R,T,A;
	P=1000, R=10, T=10;
	scanf("%d%d%d",&P,&R,&T);
	A = (P*R*T/100) + P;
	printf("%d",A);
	return 0;
}
