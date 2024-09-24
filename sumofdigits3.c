//sum of digits
#include<stdio.h>
void main()
{
	int r,q,num,q1,r1,sum;
	num=123;
	q=num/10;
	r=num%10;
	q1=q/10;
	r1=q%10;
	sum=q1+r1+r;
	printf("Sum of digits = %d",sum);
}
