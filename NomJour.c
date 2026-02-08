#include<stdio.h>
int main()
{
	printf("Programme qui calcule la somme des termes d'une serie numerique en utilisant les boucles\n");
	
	int i,n;
	float somme;
	printf("Veuillez entrer la borne superieure n de la serie numerique : ");
	scanf("%d",&n);
	
	somme = 0;
	printf("\nLa boucle for=pour :\n");
	for(i=1;i<=n;i++){
		somme=somme+(1.0/i);
	}
	printf("La somme est : %f\n",somme);
	
	printf("La boucle while=tantque :\n");
	i=1;
	somme = 0;
	while(i<=n){
		somme=somme+(1.0/i);
		i+=1;
	}
	printf("La somme est : %f\n",somme);
	
	printf("La boucle do..while=Repeter..Jusqu'a :\n");
	i=1;
	somme = 0;
	do{
		somme=somme+(1.0/i);
		i+=1;
	}while(i<=n);
	printf("La somme est : %f\n",somme);
	
	
	getchar();
	return 0;
}
