#include<stdio.h>
int main()
{
	int a=10;
	int b;
	b=++a;
	printf("%d\n",a);     // first INCREMENT and then ASSIGNMENT.
	printf("%d",b);
}
