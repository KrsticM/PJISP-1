/*
*	Zadatak 01
*	Napisati program koji učitava matricu A i ispisuje
*	sumu elemenata koji se na sporednoj dijagonali
*	matrice.
*/

#include <stdio.h>
#define MAX 10

int main() {
	int n; //Dimenzija matrice
	int A[MAX][MAX]; //Matrica A maksimalne velicine MAX x MAX
	int i, j; //Brojači za prolaz kroz matricu
	int s = 0; //Suma

	do {
		//Samo kvadratna matrica ima sporednu dijagonalu
		printf("Unesite duzinu kvadratne matrice [n<%d]: ", MAX);
		scanf("%d", &n);
	} while (n <=0 || n > MAX);

	//Učitavanje matrice
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	//Računanje sume na sporednoj dijagonali
	for (i = 0; i < n; i++) {
		s += A[i][n-(i+1)];
	}

	printf("Suma na sporednoj dijagonali: %d\n", s);

	return 0;
}