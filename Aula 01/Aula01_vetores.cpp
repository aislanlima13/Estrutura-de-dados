#include <iostream>
using namespace std;

main() {
	int v[100];
	int n = 0;
	n = 4;
	int i;
	int key;
	
	// adiciona itens ao vetor
	v[0] = 77;
	v[1] = 55;
	v[2] = 1;
	v[3] = 2;
	
	for (i = 0; i < n; i++) {
		cout <<" " << v[i];
	}
	
	cout<<endl;
	
	// realizando busca no vetor
	cout <<"Informe chave: ";
	
	cin >> key;
	
	for (i = 0; i < n; i ++) {
		if (v[i] == key) {
			cout<<"Chave encontrada: " <<v[i] << "; posicao: " << i << endl;
			break;
		}
	}
	
	if (i == n) {
		cout<< "Chave nao encontrada" << endl;
	}
	
	// Remoção de itens do vetor
	// Removendo o último item 2 - situação ideal pois não precisa reajustar os itens do vetor
	// se remover um elemeno que não seja o último é necessário criar um vetor secundário para reordenar os valores
	
	int removeKey = 0;
	cout<< "Chave para remover do vetor: ";
	cin >> removeKey;
	
	for (i = 0; i < n; i ++) {
		if (v[i] == removeKey) { // achou o item?
		
			if (i != (n-1)) { // não é o último item
				for (int j = i; j < (n-1); j ++) { // vetor caminha e realoca os valores
					v[j] = v[j+1];
				}
			}
		
			n--; // decrementa elemento do vetor
			for (int k = 0; k < n; k ++) {
				cout << v[k];
			}
			
			break;
		}
	}
}

