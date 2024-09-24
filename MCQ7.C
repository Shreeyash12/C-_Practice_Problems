#include<stdio.h>
int main()
{
	int a=0;
	int b=20;
	a++&&b++; //first is false thats why it doesn't move forward.
	printf("%d\n",a);     // first assignment and then increment.
	printf("%d",b);
}
