#include<stdio.h>
#include<math.h>
int main()
{
	
	printf("Programme qui determine la nature d'un triangle\n");
	
    float PremiereCote, DeuxiemeCote, TroisiemeCote;
    printf("Veuillez entrer la premiere cote du triangle : ");
    scanf("%f",&PremiereCote);
    printf("Veuillez entrer la deuxieme cote du triangle : ");
    scanf("%f",&DeuxiemeCote);
    printf("Veuillez entrer la troisieme cote du triangle : ");
    scanf("%f",&TroisiemeCote);
    
    if(PremiereCote+DeuxiemeCote>TroisiemeCote && PremiereCote+TroisiemeCote>DeuxiemeCote && DeuxiemeCote+TroisiemeCote>PremiereCote){
				printf("C'est un triangle ");
		if((pow(PremiereCote,2)==pow(DeuxiemeCote,2)+pow(TroisiemeCote,2)) || (pow(DeuxiemeCote,2)==pow(PremiereCote,2)+pow(TroisiemeCote,2)) || (pow(TroisiemeCote,2)==pow(PremiereCote,2)+pow(DeuxiemeCote,2)))
			printf("rectangle.\n");
		else if((PremiereCote==DeuxiemeCote && PremiereCote!=TroisiemeCote) || (PremiereCote==TroisiemeCote && PremiereCote!=DeuxiemeCote) || (DeuxiemeCote==TroisiemeCote && DeuxiemeCote!=PremiereCote))
			printf("isocele.\n");
		else if(PremiereCote==DeuxiemeCote && PremiereCote==TroisiemeCote)
			printf("equilateral.\n");
		else
			printf("Scalene.\n");
	
	}
	else
		printf("Les trois cotes ne forment pas un triangle.\n");
    
	getchar();
	return 0;
}

