#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	a++||b++;
	printf("%d\n",a);     // first assignment and then increment.
	printf("%d",b);
}
