# include <stdio.h>
#include <stdlib.h>

int main() { // Ceci est un jeu où l'utilisateur doit deviner un nombre tiré au hasard. Le score correspond au nombre de tentaives.
	int Nombre_A_Trouver = (int)rand(1, 1000);
	int Nombre_Entre = 0;
	int Compteur = 0;
	

	while (Nombre_A_Trouver != Nombre_Entre) {
		printf("Veuillez Entrer le bon nombre \n ");
		scanf_s("%d", &Nombre_Entre);
		Compteur += 1;
		if (Nombre_A_Trouver > Nombre_Entre) {
			printf("Trop petit ! \n");
		}
		if (Nombre_A_Trouver < Nombre_Entre) {
			printf("Trop grand !\n");
		}
	}
	printf("Bravo ! Vous avez trouver le bon nombre \n Votre score est de : %d !\n ", Compteur);
	system("pause");
	return (EXIT_SUCCESS);

}
