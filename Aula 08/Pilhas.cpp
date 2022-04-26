#include <iostream>
using namespace std;

// Exemplo de algoritmo pilha

class Pilha {
	private: double *itens;
	int topo, tam_max;
	
	public: Pilha(int n) {
		itens = new double[n];
		tam_max = n;
		topo = 0;
	}
	
	bool empty() {
		return (topo == 0);
	}
	
	bool full() {
		return (topo == tam_max);
	}
	
	int size() {
		return topo;
	}
	
	void push(double valor) { // insere itens
		if (full()) {
			cout << " - PILHA CHEIA - ITEM NAO ADICIONADO - \n";
			return;
		}
		
		itens[topo] = valor;
		topo++;
	}
	
	void pop() { // remoção de itens
		if(empty()) {
			cout << "- PILHA VAZIA - \n";
		}
		
		topo--;
	}
	
	double top() {
		if (!empty()) return itens[topo - 1];
	}
};

main() {
	Pilha p(3);
	
	p.push(20.5);
	p.push(13);
	p.push(2);
	
	// esvaziando a lista
	while(!p.empty()) {
		cout << p.top() << endl;
		p.pop();
	}	
	
}

