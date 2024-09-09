#include <stdio.h>
main()
{
	int age;
	printf("Enter your age:  ");
	scanf("%d",&age);
    if(age>=18)
    printf("Issue license.");
    else
    printf("You are under age.");
}