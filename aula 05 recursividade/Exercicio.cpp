// Exercícios de recursividade

#include <iostream>
using namespace std;

int f(int v[], int n) {
	if (n == 0) {
		return 0;
	} else {
		int s;
		s = f(v, n-1);
		
		if(v[n-1] > 0) s = s + v[n-1];	
		
		return s;
	}
}

main() {
	
	/** Exercício: suponha que a função f() é acionada com os seguintes parametros:
		f({2, -4, 7, 0, -1, 4}, 6
		Resposta = 13 */
	int v[6];
	v[0] = 2;
	v[1] = -4;
	v[2] = 7;
	v[3] = 0;
	v[4] = -1;
	v[5] = 4;

	int fatorial = f(v, 6);	
	
	cout <<"F: " << fatorial << endl;
	
	system("pause");
}
