#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	for (int i=0; i<20; i++)    // dla kazdego elementu
		tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19

	/***** Tutaj umieść rozwiązanie zadania ******/
	int x, c=0;
	scanf("%d", &x);
	for (int i=0; i<20; i++)
	{
		if(tab[i]==x)
			c=1;
	}
	if(c==1)
		printf("Liczba wystepuje\n");
	else
		printf("Liczba nie wystepuje\n");
	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/
	printf("tab = [");
	for (int i=0; i<19; i++)
		printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);
}

