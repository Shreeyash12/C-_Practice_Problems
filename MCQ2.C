#include<stdio.h>
int main()
{
	printf("hi")&&printf("Hello\n");  // if first is true then it move forward.
	printf("hi")||printf("Hello\n"); //if first is true then it doesn't move forward.
	printf("")&&printf("Hello\n"); //if first is false then it doesn't move forward.
	printf(" ")&&printf("\nHello"); //if first is space then it move forward.
	
}
