#include <stdio.h>
#include <stdlib.h>


void bubble_sort(int tab[], int size)
{
int temp,i,zmiana;
do
	{
	zmiana=0;
	i=size-1;
	do
		{
		i--;
		
			if (tab[i+1]< tab[i])
			{
				temp=tab[i];
				tab[i]=tab[i+1];
				tab[i+1]=temp;
				zmiana=1;
			}
		}
	while (i!=0);
	}
		
while (zmiana!=0);
 

for(i=0; i<size; i++) printf("%d ",tab[i]);
}


int main(void)
{
int size=0,i;
int tab[150];

system("cls");
printf("Podaj liczby ");

for(i=0; i<150; i++)
	{
	scanf("%i",&tab[i]);
	if(tab[i]==0)
		break;
	size++;
	}
	
system("cls");

bubble_sort(tab,size);



return 0;
}
