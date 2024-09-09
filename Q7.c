#include <stdio.h>
int main() 
{
    int light;
    printf("Enter the light sensor value: ");
    scanf("%d",&light);
    if (light<0 || light> 1000) 
	{
        printf("Please enter a value between 0 and 1000\n");
    }

   if (lightValue > 500 && lightValue <= 1000)
        printf("The light condition is Sunshine\n");
    else if (lightValue >= 0 && lightValue <= 100)
        printf("The light condition is Evening\n");
    else if (lightValue > 100 && lightValue <= 500)
        printf("The light condition is Lighting\n");
    else
        printf("Invalid light value\n");
    return 0;
}
