#include<stdio.h>
#include<stdlib.h>
//average na +4isla v interval


int main()
{
int a,b,k,i = 0 ,num,avr = 0;

do {

	if(printf(" Долна граница = ")  > 0) 

	k = scanf("%d" ,&a);

	while(getchar() != '\n');

}while(k!=1);


do {

	if(printf("Горна граница граница  = ") > 0) 

	k = scanf("%d" ,&b);

	while(getchar() != '\n');

}while(k==0 || b < a);

while(1)
{
printf("break y/n");
 k = getchar();
	if(k == 'Y' || k == 'y')
	{
	break;

	}


	do {

	if(printf("Число =  ") > 0) 

	k = scanf("%d" ,&num);

	while(getchar() != '\n');

	}while(k == 0);
	if(   num>a && num<b  && num>0)
	{
		avr+=num;
		i++;

	}
	
}


	if(i == 0)
	{
	printf("Няма числа");
	}
	else
	{
		
		if(printf("avr =  %f", (float)avr/i ) > 0);
	}
}
