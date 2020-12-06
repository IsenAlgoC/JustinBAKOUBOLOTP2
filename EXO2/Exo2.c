# include <stdio.h> ; 
# include <stdlib.h> ; 


void Ordonner_Les_Trois_Valeurs(float* a, float* b, float* c) {

	float temp = 0;
	if (*a < *b) {// On odronne a et b dans le sens décroissant.
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if (*b < *c) {// On ordonne b et c dans le sens décroissant. 
		temp = *c;
		*c = *b;
		*b = temp;
	}
	if (*a < *b) { // On ré-ordonne a et c dans le sens décroisssant, la valeur du nouveau b pouvant être plus grande que celle de a. 
		temp = *a;
		*a = *b;
		*b = temp;
	}
	printf("%f %f %f", *a, *b, *c); // Permet de vérifier que les nombres ont bien été rangés.
}

int main() {
	float  hauteur = 0;
	float largeur = 0;
	float  profondeur = 0;
	int i = 1;

	while (i == 1) { // On demande à l'utlisateur de saisir les dimensions de sa valise tant qu'elles ne sont comprises entre 1 et 150 
		while (hauteur > 150 || hauteur <= 0) {
			printf("\nEntrez la hauteur de la valise : \n ");
			scanf_s("%f", &hauteur);
			if (hauteur <= 0 || hauteur > 150) {
				printf("\nSaisie Invalide\n");
			}
		}
		while (profondeur > 150 || profondeur <= 0) {
			printf("\nEntrez la profondeur de la valise : \n ");
			scanf_s("%f", &profondeur);
			if (profondeur <= 0 || profondeur > 150) {
				printf("`\nSaisie Invalide\n");
			}
		}
		while (largeur > 150 || largeur <= 0) {
			printf("\nEntrez la largeur de la valise : \n ");
			scanf_s("%f", &largeur);
			if (largeur <= 0 || largeur > 150) {
				printf("\nSaisie Invalide\n");
			}
		}

		Ordonner_Les_Trois_Valeurs(&hauteur, &profondeur, &largeur); // On ordonne les valeurs entrées.

		if (hauteur == 55 && profondeur == 35 && largeur == 25) { // On valide ou pas les dimensions entrées.
			printf(" \n VALIDE");

		}
		else {
			printf("\n NON VALIDE");
		}
		printf("voulez vous valider un autre colis \n 0- Non \n 1- Oui\n ");
		scanf_s("%d", &i);
	}

	system("pause");
	return (EXIT_SUCCESS);

}
