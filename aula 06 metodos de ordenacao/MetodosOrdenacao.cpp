#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// BubbleSort
void bubbleSort(int *v, int n) {
	int troca;
	
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < n - 1; j ++) {
			if (v[j] > v[j+1]) {
				troca = v[j];
				v[j] = v[j + 1];
				v [j + 1] = troca;
			}
		}
	}
}

// Selecao
void selecao(int *v, int n) {
	int i, j, min;
	int troca;
	
	for (i=0; i < n-1; i++) {
		min = i;
		for (j=i+1; j < n; j++) {
			if (v[j] < v[min]) {
				min=j;
			}
		}
		
		troca = v[i];
		v[i] = v[min];
		v[min] = troca;
	}
}

// Insercao
void insercao(int *v, int n) {
	int i, j;
	int marcada;
	
	for (i = 1; i < 9; i++) {
		marcada = v[i]; 
		j = i;
		
		while ((j > 0) && (v[j-1] > marcada)) {
			v[j] = v[j-1];
			j = j - 1;
		}
		
		v[j] = marcada;
	}
}

void intercala(int *v, int inicio, int meio, int fim) {
	/** 
		Utilizado para ordenar o vetor no método merge sort
	 **/
	int aux[fim-inicio+1];
	int i = inicio;
	int j = meio+1;
	int k = 0;
	
	while ( i<=meio && j<=fim )
		if ( v[i] <= v[j] ) aux[k++] = v[i++];
		else aux[k++] = v[j++];
		
	while ( i <= meio ) aux[k++] = v[i++];
	while ( j <= fim ) aux[k++] = v[j++];
	
	for ( i=0; i<(fim-inicio+1); i++) v[inicio + i] = aux[i];
}

// Merge Sort
void mergeSort(int *v, int inicio, int fim) {
	if (inicio == fim) {
		return;
	}
	
	int meio = (inicio + fim) / 2;
	
	mergeSort(v, inicio, meio);
	mergeSort(v, meio + 1, fim);
	
	intercala(v, inicio, meio, fim);	
}

// Quick Sort
void quickSort(int *v, int esq, int dir) {
	int i = esq;
	int j = dir;
	int pivo = v[(esq + dir) / 2];
	
	do {
		while (v[i] < pivo && i < dir) {
			i++;
		}
		
		while (pivo < v[j] && j > esq) {
			j--;
		}
		
		if (i <= j) {
			int aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j++;
		}
		
	} while (i <= j);
	
	if (esq < j) {
		quickSort(v, esq, j);
	}
	
	if (i < dir) {
		quickSort(v, i, dir);
	}
}

main() {
	
	int v[9];
	v[0] = 2;
	v[1] = -4;
	v[2] = 7;
	v[3] = 0;
	v[4] = -1;
	v[5] = 4;
	v[6] = 411;
	v[7] = 8;
	v[8] = 99;

	
	mergeSort(v, 0, 9);
}


































