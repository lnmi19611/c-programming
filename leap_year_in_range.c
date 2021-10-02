#include<stdio.h>

int main()
{
	int year,count=0, max, min;
    printf("Enter min amd max range of years : ");
    scanf("%d %d",&min, &max);

    for(year=min;year<=max;year++)
    {   
        if(year % 400 == 0)
        {
            printf("%d ( leap year ) \n",year);
            count++;
        }
        else if(year % 100 == 0)
        {
            // printf("%d\n",year);
        }
        else if(year % 4 == 0)
        {
            printf("%d ( leap year ) \n",year);
            count++;
        }
        else
        {
            // printf("%d\n",year);
        }
    }

    printf("\n Total number of Leap Years between %d and %d = %d",min,max,count);
	
	return 0;

}
