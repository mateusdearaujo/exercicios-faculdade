#include <iostream>

using namespace std;

void exibir(int resultado);

int main() {
	int n1, n2, resultado, i;

	resultado = 0;
	cout << "Digite o menor número: ";
	cin >> n1;
	i = n1 + 1;
	cout << endl << "Digite o maior número: ";
	cin >> n2;
	cout << endl;

	while(i > n1 && i < n2) {
		if((i % 3) == 0 && (i % 4) == 0) {
			resultado = resultado + i;
			cout << i << " é divisivel por 3 e 4" << endl;
		}
		i++;
	}

	exibir(resultado);
}

void exibir(int resultado) {
	cout << fixed;
    cout.precision(2);
	cout << endl << "A soma dos valores é: " << resultado << endl;
}
