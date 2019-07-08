/*
Sortpwanie liczb calkowitych metoda QuickSort
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void quicksort(int tablica[10], int x, int y)
{
	int i,j,v,temp;
	
	i=x;
	j=y;
	v=tablica[div(x+y,2).quot];
	
	do
	{
		while (tablica[i]<v)
		i++;
		while (v<tablica[j])
		j--;
		
		if (i<=j)
		{
			temp=tablica[i];
			tablica[i]=tablica[j];
			tablica[j]=temp;
			i++;
			j--;
		}
	}
	while
	(i<=j);
	
	if (x<j)
	quicksort(tablica,x,j);
	if (i<y)
	quicksort(tablica,i,y);
}


int main(void)
{
	int ile_liczb,i,liczba;
	int tablica[10];
	
	system("cls");
	printf("Ile liczb chesz posortowac (do 10) ? ");
	scanf("%d",&ile_liczb);
	for(i=0; i<ile_liczb; i++)
	{
		printf("Wprowadz liczbe #%d: ",i+1);
		scanf("%d",&liczba);
		tablica[i]=liczba;
	}
	
	system("cls");
	printf("Tablica przed posortowaniem:");
	for(i=0; i<ile_liczb; i++)
	{
		printf("\n%d",tablica[i]);
	}
	
	quicksort(tablica,0, ile_liczb-1);
	printf("\nTablica po posortowaniu:");
	for(i=0; i<ile_liczb; i++)
	{
		printf("\n%i",tablica[i]);
	}
	printf("\nDowolny klawisz...");
	getch();
}
