#include<stdio.h>
#include<stdlib.h>
int x;

int potencia (int b, int exp)
{
	int i=0;
	int p=1;
	for(i=0; i<exp;i++)
		p*=b;
		return p;
}
int main ()
{
	int y=50;
	printf("5 a la 3 es igual a= %d\n ",potencia (5,3));
	system("pause");
	return 0;
}
