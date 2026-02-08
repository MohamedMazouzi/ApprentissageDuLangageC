#include<stdio.h>
int main()
{
	printf("Programme qui determine si une annee est bissextile ou non\n");
	
    int Annee;
    printf("Veuillez entrer une annee : ");
    scanf("%d",&Annee);
    
    if((Annee%4==0 && Annee%100!=0) || Annee%400==0)
		printf("%d est bissextile.\n",Annee);
	else
		printf("%d n'est pas bissextile.\n",Annee);
	
	getchar();
    return 0;
}
