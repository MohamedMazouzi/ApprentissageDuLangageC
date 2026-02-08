#include<stdio.h>
int main()
{
	printf("Programme qui affiche le nom du mois a partir de son numero\n");
	
	int NumeroMois;
	printf("Veuillez entrer le numero du mois : ");
	scanf("%d",&NumeroMois);
	
	switch(NumeroMois)
	{
		case 1: printf("Janvier\n");break;
		case 2: printf("Fevrier\n");break;
		case 3: printf("Mars\n");break;
		case 4: printf("Avril\n");break;
		case 5: printf("Mai\n");break;
		case 6: printf("Juin\n");break;
		case 7: printf("Juillet\n");break;
		case 8: printf("Aout\n");break;
		case 9: printf("Septembre\n");break;
		case 10: printf("Octobre\n");break;
		case 11: printf("Novembre\n");break;
		case 12: printf("Decembre\n");break;
		default : printf("Le mois correspondant a ce numero n'existe pas.\n");
	}
	
	getchar();
	return 0;
}
