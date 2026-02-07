#include<stdio.h>
int main()
{
	printf("Programme qui change le contenu de deux variables\n");
	
	float A, B;
	printf("Veuillez entrer la valeur de A : ");
	scanf("%f",&A);
	printf("Veuillez entrer la valeur de B : ");
	scanf("%f",&B);
	
	A = A+B;
	B = A-B;
	A = A-B;
	
	printf("\nLa nouvelle valeur de A est : %f\n",A);
	printf("La nouvelle valeur de B est : %f\n",B);
	
	/*Temp = A;
	  A = B;
	  B = Temp;
	 */
	
	getchar();
    return 0;
}
