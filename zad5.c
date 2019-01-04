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

	int x;
	int mniejsze=0;
	int wieksze=0;
	int rowne=0;
	scanf("%d", &x);
	for (int i=0; i<20; i++)
	{
		if(tab[i]<x)
			mniejsze+=1;
		if(tab[i]==x)
			rowne+=1;
		if(tab[i]>x)
			wieksze+=1;
	}
	printf("Wieksze od x: %d\n", wieksze);
	printf("Mniejsze od x: %d\n", mniejsze);
	printf("Rowne x: %d\n", rowne);

	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/
	printf("tab = [");
	for (int i=0; i<19; i++)
		printf("%d, ", tab[i]);
	printf("%d]\n", tab[19]);
}

