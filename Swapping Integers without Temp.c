#include <stdio.h>
int main()
{
	int Num1, Num2;
	
	printf("Enter the first number: ");
	scanf("%d", &Num1);
	
	printf("Enter the second number: ");
	scanf("%d", &Num2);
	
	Num1 = Num1 + Num2;
	Num2 = Num1 - Num2;
	Num1 = Num1 - Num2;
	
	printf("After swapping, the first number is = %d\n",Num1);
	printf("While the second number is = %d",Num2);
}