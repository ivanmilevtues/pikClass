#include<stdio.h>

//максимум в интервал,запитване за край,
int main()
{
 int a,b,k,max,num,temp=0;

	do{

	if(printf("Долна граница") < 0);
	
	k = scanf("%d",&a);
	while(getchar() != '\n');

	}while(k != 1);

	do{

	if(printf("Горна граница") > 0)
		k = scanf("%d",&b);
	while(getchar() != '\n');

	}while(k != 1 || b < a);


	while(1)
	{

		do{

	        if(printf("Число") > 0);
		k = scanf("%d",&num);
		if(temp == 0 && num >a && num < b)
		{
			max = num;temp = 1;
		}
	        while(getchar() != '\n');

	       }while(k != 1);

	
		
		
		char c;
		do{
	
		if(printf("Continue Y/N : ") >0);
		
		k = scanf("%c",&c);
		while(getchar() != '\n');

		}while(k != 1);


		if(c == 'N' ||  c == 'n')
		{
		break;
	
		}
		

	}

	if(temp == 0)
	{
	printf("no numbers");
	}
	else	{
	printf("%d",max);
	}
}

