#include<stdio.h>
#include<math.h>
int main()
{
	printf("Programme qui resout une equation de deuxiem degre\n");
	
	float a, b, c, PremierSolution, DeuxiemSolution,DiscriminantDelta;
	printf("Veuillez entrer les coefficients a , b et c de l'equation :\n");
	scanf("%f %f %f",&a, &b, &c);
	
	if(a==0){
		if(b==0){
			if(c==0)
				printf("Toutes les reels sont des solutions de cette equation.\n");
			else
				printf("L'equation admet aucune solution dans l'ensemble des nombres reels.\n");
			
		}
		else{
			PremierSolution=-c/b;
			printf("L'equation admet une solution dans l'ensemble des nombres reels est : %f\n",PremierSolution);
		}
	}
	else{
		DiscriminantDelta=pow(b,2)-4*a*c;
		if(DiscriminantDelta<0)
			printf("L'equation admet aucune solution dans l'ensemble des nombres reels.\n");
		else if(DiscriminantDelta==0){
			PremierSolution=-b/(2*a);
			printf("L'equation admet une solution dans l'ensemble des nombres reels est : %f\n",PremierSolution);
		}
		else{
			PremierSolution=(-b-sqrt(DiscriminantDelta))/(2*a);
			DeuxiemSolution=(-b+sqrt(DiscriminantDelta))/(2*a);
			printf("L'equation admet deux solutions distincts dans l'ensemble des nombres reels sont : %f et %f\n",PremierSolution,DeuxiemSolution);
			}
	}
		
	
	getchar();
    return 0;
}

