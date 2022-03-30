#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

main () {
	int n = 10;
	int busca;
	int i;
	int v[n];
	
	// insere valores aleatorios no vetor
	for (i = 0; i < n; i ++) {
		v[i] = rand() %20;
	}
	
	// exibe itens do vetor
	for (i = 0; i < n; i ++) {
		cout << v[i] << endl;
	}
	
	// inicia busca
	cout << "Insira o valor a ser pesquisado: ";
	cin >> busca;
	
	for (i = 0; i < n; i ++) {
		if (busca == v[i]) {
			cout << "Valor encontrado na posicao " << i << endl;
			break;
		}
	}
}
