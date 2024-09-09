#include <stdio.h>
int main()
{
	int num1,num2;
	char oper;
	float result;
	printf("Enter number 1: ");
	scanf("%d",&num1);
	printf("\nEnter operator: ");
	scanf(" %c",&oper);
	printf("\nEnter number 2: ");
	scanf("%d",&num2);
	if(num2==0)
	  {
	  printf("Number cannot be divided by zero");}
	else
	{
	switch (oper)
	{
		case '+':
			result=num1+num2;
			break;
		case '-':
		    result=num1-num2;
			break;
		case '*':
		    result=num1*num2;
			break;	
		case '/':
		    result=num1/num2;
			break;
		default:
		printf("Invalid operator.");		
	}
	printf("%d %c %d = %f",num1,oper,num2,result);
    }
}