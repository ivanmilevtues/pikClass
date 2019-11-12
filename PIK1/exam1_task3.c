#include<stdio.h>
#include<stdlib.h>
//foff(stdin)
//feof
///da kastnem
//check sus simvol
//max otr v 
//1,-1,0
//limits
//^gluposti^



// minimum na vsi4ki otricatelni 4isla v interval
int main()
{
int a,b,k,flag =0 ,min,num;

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
 k =getchar();
	if(k == 'Y' || k == 'y')
	{
	break;

	}


	do {

	if(printf("Число =  ") > 0) 

	k = scanf("%d" ,&num);

	while(getchar() != '\n');

	}while(k == 0);
	if( flag == 0 && num>a && num<b  && num<0)
	{

		min = num;
		flag = 1;

	}
	if( flag == 1 && num > a && num < b && num  < 0 && num < min)
	{
	min = num;

	}

}
	if(flag == 0)
	{

	printf("Няма числа");
	}
	else
	{
	if(printf("%d",min) > 0 );
	}
}
