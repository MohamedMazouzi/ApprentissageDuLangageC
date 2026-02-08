#include<stdio.h>
int main()
{
	printf("Programme qui calcule la factorielle d'un entier naturel en utilisant la boucle pour=for\n");
	printf("----------------------------------------------------------------------------------------\n");
	
	int N,i;
	unsigned long long int FactorielleN;
	printf("Veuillez entrer un entier naturel pour calculer sa factorielle : ");
	scanf("%d",&N);
	while(N<0){
		printf("Erreur : cet nombre doit etre un entier naturel.\n");
		printf("Entrez un nouveau nombre : ");
		scanf("%d",&N);
	}
	
	FactorielleN=1;
	for(i=1;i<=N;i++)
		FactorielleN*=i;
	printf("La factorielle de %d est : %d!= %llu\n",N,N,FactorielleN);
	
	getchar();
    return 0;
}
