#include<stdio.h>
int main()
{
	//fahrenheit to celsius
	float fahrenheit,celsius;
	fahrenheit=205;
	printf("fahrenheit to celsius: \n");
	celsius=(fahrenheit-32)*5/9;
	printf("fahrenheit to celsius = %f\n",celsius);
	/// celsius to fahrenheit 
	printf("celsius to fahrenheit : \n");
	celsius=95;
	fahrenheit=(celsius*9/5)+32;
	printf("celsius to fahrenheit : %f",fahrenheit);	
}
