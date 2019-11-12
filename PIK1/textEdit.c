#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h>
//fgets() preobrazuva \n v '\0'
//fputs()
//sscanf()
//sprintf(),itoa
//strncpy(s1,s2,broi(smpize_t))
//strcmp
//memset(s1,'\0',) slaga '\0'
//strcat(s1,s2)//dobavq str2 v kraq na str1
//strstr(str1,str2)//tarsi podstring v stringa
//s2 = strdup(s1) // s2 v dinami4nata pamet ne v stati4nata
//k =  strlen(s)
//tekst[256],dumi v tekst,izvejdane,kolko puti se sre6ta
//4islo 125 delim na cifri v niz izvejdame,obra6tagame me 
int main()
{
char s[256],word[30],word_to_find[30];
int i =0,j=0,count =0,k = 0;
bool inWord = false;
fgets(word_to_find,30,stdin);
word_to_find[strlen(word_to_find) - 1 ] = '\0';
fgets(s,255,stdin);

s[strlen(s)-1] = '\0' ;
//printf("%c",s[strlen(s)-1]);
	do
	{

		if(inWord == false)
		{
			if(!isspace(s[i]))
			{
			inWord = true;
			word[j++] = s[i];


			}
			else
			{
			i++;
			continue;
			}


		}
		
		else{

			if(isspace(s[i]) || s[i+1]== '\0')
			{
			inWord = false;
			if(s[i+1]== '\0')
			{word[j++] = s[i];
			}
			word[j] = '\0';
			count++;
			printf("%d%s ",count,word);
			if(strcmp(word_to_find,word) == 0)
				{
				k++;
				}
			j =0;

			}




			if(s[i] != ' ')		
			word[j++] = s[i];                    
		}
	



	i++;
	}while(s[i]);

printf("%d\n",count);
printf("times found word %d\n",k);
}

