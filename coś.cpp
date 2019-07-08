#include <stdio.h>

 
int main(void)
{    
	int a[5], b, i=0, j=0, t;

	printf("Ile porostowac? \n");
	scanf("%d",&b);
	
	printf("Podaj liczbe: \n");
	
    for(i=0; i<b; i++){
    scanf("%d", &a[i]);
    }
    
   
 
    for(j=0; j<b; j++){
    for(i=0; i<b; i++){
             if(a[i]>a[i+1]){
                             t=a[i];
                             a[i]=a[i+1];
                             a[i+1]=t;
                             }
                      }
                      }
 
    printf("\nPosortowane:\n");
    
    for(i=0; i<b; i++)
	printf("%d\n", a[i]);

}
