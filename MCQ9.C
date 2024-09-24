#include<stdio.h>
int main()
{
	int a=10;
	int b=--a; //first decrement and then assignment
	int c=a--; //first assignment and then decrement
	printf("%d\n",b);
	printf("%d",c);
}
