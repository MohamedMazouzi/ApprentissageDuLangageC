#include<stdio.h>
int main()
{
	printf("Programme qui determine la parite d'un entier\n");
	
    int NombreEntier;
    printf("Veuillez entrer un entier : ");
    scanf("%d",&NombreEntier);
    
    if(NombreEntier%2==0)
		printf("%d est un nombre pair.\n",NombreEntier);
	else
		printf("%d est un nombre impair.\n",NombreEntier);
	
	getchar();
    return 0;
}
