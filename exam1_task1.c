#include<stdio.h>


//брой na  отрицателни в интервал, krai s въвеждане на 0 
int main()
{ 
	int a,b,amount=0,k,num;


	do{
			if(printf(" Долна граница =  ") >0);
			k = scanf("%d",&a);
			while(getchar() != '\n');	
	
		}while(k != 1);

	
	do{
			if(printf(" Горна граница =   ") >0)
			k = scanf("%d",&b);
			while(getchar() != '\n');	
	
		}while(k != 1 ||  b < a );

	while(1)
	{
			do{
			if(printf(" число =  ") >0);
			
			k = scanf("%d",&num);
			
			if(num == 0)
			{
			break;

			}
			while(getchar() != '\n');	
	
		}while(k != 1);

			if(num == 0)
			{
			break;
			}

		if(num>a && num<b && num < 0)
		{
			amount++;
		}	

		

	}


	if(printf("%d",amount) >0);



}
