#include <stdlib.h>
#include <stdio.h>


int main() {
	// Somme des n premiers entiers naturels

	unsigned short int n = 100; // Initalisation des valeurs de n, somme et i
	unsigned short int somme = 0;
	unsigned short int i = 0;

	// Avec la boucle for 

	for (i = 1; i <= 100; i++) {
		somme += i;
	}

	printf("La somme des %d premiers entiers naturels avec la boucle for est : %d ", n, somme);

	somme = 0;
	i = 0;
	// Avec la boucle  while

	while (i <= n) {
		somme += i;
		i++;
	}
	printf(" \n La somme des %d  premiers entiers naturels avec la boucle while est : %d ", n, somme);
	somme = 0;
	i = 0;

	// Avec Do while
	do { somme += i; i++; } while (i <= n);
	printf(" \n La somme des %d  premiers entiers naturels avec la boucle do... while est : %d ", n, somme);

	// la somme est codée en unsigned short int donc sur 16 bits. La valeur maximale possible est 2^16- 1 = 65535 
	// Mathématiquement cela correspont à n = 361
	// test permettant d'eviter le dépasser 
	unsigned short int Somme_Maximale = 65535;
	somme = 0;
	i = 0;
	printf("\n Veuillez entrer une valeur de n : ");
	scanf_s("%hu", &n);
	while (i <= n) {
		somme += i;
		i++;
		if (Somme_Maximale - somme < i) { // Cette ligne nous permet de tester s'il y aura dépassement ou pas, dans ce cas on sort de la boucle.
			printf("\nDepassement de capacite \n");
			break;
		}
	}
	// Dans cette partie nous testons des n > 361. Normalement la somme est supérieure à 65535; 
	// mais puisqu'il y a dépassement on optient l'affichage d'un nombre inférieur à 65535.
	somme = 0;
	i = 0;
	printf("\nEntrez un nombre superieur a 361:");
	scanf_s("%hu", &n);
	while (i <= n) {
		somme += i;
		i++;
	}
	printf("\nLa valeur de la somme est : %d \n ", somme);
	somme = 0;
	i = 0;
	// L'utilisateur doit entrer des valeurs <= 361 
	do {
		printf("\nEntrez une valeur de n inferieur  361 :\n");
		scanf_s("%hu", &n);
	} while (n >= 361);
	for (i = 1; i <= n; i++) {
		somme += i;
	}
	printf(" La valeur de la somme est : %d \n ", somme);

	system("pause");
	return (EXIT_SUCCESS);

}