#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a, b, c, zamiana;
	int tab[20];
	
	printf("Ile liczb chcesz sortowac? \n");
	scanf("%d",&a);
	
	printf("Podaj liczbe: \n");
	for(c=0;c<a;c++)
	{
		
		scanf("%d",&tab[c]);
	}
	
	printf("Tablica przed\n");
	for(c=0;c<a;c++)
	{
		printf("%d\n", tab[c]);
	
	}
	
	printf("Tablica po\n");
	for(b=0; b<a; b++)
	{
    	for(c=0; c<a; c++)
		{
        	if(tab[c]>tab[c+1])
			{
                zamiana=tab[c];
            	tab[c]=tab[c+1];
                tab[c+1]=zamiana;
            }
    	}
    }
    for(c=0;c<a;c++)
    {
    	printf("%d\n", tab[c]);
	}
 return 0;
}
