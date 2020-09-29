# include <stdio.h>
# include <stdlib.h>

int main() {// Ce programme permet de dire si une annee est une annee bissextile ou non.
	int Annee = 0;
	printf("Veuillez entrer l'annee:\n");
	scanf_s("%d", &Annee);
	// Traitement avec une seule expression logique. 
	if (Annee % 100 == 0 || Annee % 4 == 0 || Annee % 400 == 0) {
		printf("C'est bien annee bissextile\n");
	}
	else {
		printf("Ce n'est pas une annee bissextile\n");
	}
	//  Taitement avec des else if imbriqués
	if (Annee % 100 != 0) {
		if (Annee % 4 != 0) {
			printf("Ce n'est pas une annee bissextile\n");
		}
		else {
			printf("C'est une annee bissextile\n");
		}
	}
	else {
		printf("C'est une annee bissextile\n");
	}

}