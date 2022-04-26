#include <iostream>
using namespace std;

// Exemplo de algoritmo fila
class Fila {
	private: double *itens;
	int fim, tam_max;
	
	public: Fila(int n) {
		itens = new double[n];
		tam_max = n;
		fim = 0;
	}
	
	public: bool full() {
		return (fim = tam_max);
	}
	
	void enqueue(double valor) { // insere itens na fila
		if ( full() ) {
			cout << " - FILA CHEIA - ITEM NAO ADICIONADO - \n";
			return;
		}
		
		itens [ fim ] = valor; // insere no final
		fim++;
	}
	
	void dequeue() { // retira itens da fila (inicio)
		if ( empty() ) {
			cout << "- ATENCAO PILHA VAZIA - \n";
			return;
		}
		
		for(int i = 0; i < (fim-1); i++)
			itens[ i ] = itens[ i+1 ]; // caminha fila
			
		fim--;
		itens[ fim ] = 0;
	}
	
	double front() { // retorna item da frente (consulta)
		if( !empty() ) return itens[ 0 ];
	}
	
	bool empty() { // esta vazia?
		return ( fim == 0 );
	}
};

main() {
	cout << "-> Criando uma fila com no maximo de 4 itens\n";
	Fila f(4);
	cout << "Adicionando item 20.5 \n";
	f.enqueue(20.5);
	cout << "Adicionando item 40.4 \n";
	f.enqueue(40.4);	
	cout << "Adicionando item 60.8 \n";
	f.enqueue(60.8);
	cout << "Adicionando item 80.5 \n";
	f.enqueue(80.5);
	cout << "Adicionando item 10 ";
	f.enqueue(10);
	
	cout << "\n-> Esvaziando a fila (todos os itens)\n";
	while (!f.empty()) { // Ate esvaziar (se não vazio)
		cout << f.front() << endl; // Mostre na tela o
		// valor do inicio
		f.dequeue(); // Retira um item da fila
	}
	
	cout << endl;
}

