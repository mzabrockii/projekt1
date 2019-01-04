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
	int max=tab[0];
	int min=tab[0];
	int suma=0;
	for (int i=0; i<20; i++)
	{
		if(tab[i]>max)
			max=tab[i];
		if(tab[i]<min)
			min=tab[i];
		suma=suma+tab[i];
	}
	printf("Maksymalna wartosc to %d\n", max);
	printf("Minimalna wartosc to %d\n", min);
	printf("Suma to %d\n", suma);

	

	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/
	printf("tab = [");
	for (int i=0; i<19; i++)
		printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);

	return 0;
}


