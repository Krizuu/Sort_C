#include <stdio.h>
#include <conio.h>
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
 
printf("\nTablica po posortowaniu:");
for(i=0; i<size; i++) printf("\n%i",tab[i]);
}


int main(void)
{
int size,i,liczba;
int tab[150];

system("cls");
printf("Ile liczb chesz posortowac (do 150) ? ");
scanf("%i",&size);

for(i=0; i<size; i++)
	{
	printf("Wprowadz liczbe #%i: ",i+1);
	scanf("%i",&liczba);
	tab[i]=liczba;
	}
	
system("cls");
printf("Tablica przed posortowaniem:");
for(i=0; i<size; i++)
printf("\n%i",tab[i]);

bubble_sort(tab,size);
printf("\nDowolny klawisz...");
getch();

return 0;
}
