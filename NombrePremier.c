#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main()
{
	int p, i;
	bool estPremier;
	printf("Veuillez entrer un entier naturel superieur ou egal a 2 pour verifier s'il est premier ou non : ");
	scanf("%d",&p);
	while(p<2){
		printf("Erreur : cet nombre doit etre un entier naturel superieur strictement a 1.\n");
		printf("Entrez un nouveau nombre : ");
	scanf("%d",&p);
	}
	
	estPremier=1;
	for(i=2;i<=sqrt(p);i++){
		if(p%i==0){
			estPremier=0;
			break;
		}
	}
	if(estPremier==1)
		printf("%d est premier.\n",p);
	else
		printf("%d n'est pas premier.\n",p);
	
	getchar();
	return 0;
}
