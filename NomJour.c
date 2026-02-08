#include<stdio.h>
int main()
{
	printf("Programme qui affiche le nom du jour a partir de son numero\n");
	
	int NumeroJour;
	printf("Veuillez entrer le numero du jour : ");
	scanf("%d",&NumeroJour);
	
	switch(NumeroJour)
	{
		case 1: printf("Lundi\n");break;
		case 2: printf("Mardi\n");break;
		case 3: printf("Mercredi\n");break;
		case 4: printf("Jeudi\n");break;
		case 5: printf("Vendredi\n");break;
		case 6: printf("Samedi\n");break;
		case 7: printf("Dimanche\n");break;
		default : printf("Le jour correspondant a ce numero n'existe pas.\n");
	}
	
	getchar();
	return 0;
}
