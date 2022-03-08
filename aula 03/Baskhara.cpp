#include <iostream>
#include <math.h>
using namespace std;

class Baskhara {
	
	private: double a;
	private: double b;
	private: double c;
	
	public: Baskhara() {
		a = 0;
		b = 0;
		c = 0;
	}
	
	public: void lerABC() {
		cout << "Infome o valor de A" << endl;
		cin >> a;
		
		cout << "Infome o valor de B" << endl;
		cin >> b;
		
		cout << "Infome o valor de C" << endl;
		cin >> c;
	}
	
	public: double delta() {
		double delta = (b * b) - 4 * a * c;
		return delta;
	}
	
	public: void raizes(double delta) {
		if (delta < 0) {
			cout << "Delta menor que zero";
		} else {
			double x1 = 0;
			double x2 = 0;
			
			x1 = -b + sqrt(delta) / (2 * a);
			x2 = -b - sqrt(delta) / (2 * a);
			
			cout << "x1: " << x1 << endl;
			cout << "x2: " << x2 << endl;
		}
	}
	
};

main() {
	Baskhara b;
	b.lerABC();
	b.raizes(b.delta());
}
