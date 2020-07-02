#include <iostream>
#include <tgmath.h>

using namespace std;

double lerValor();
double diasAtrasados();
double cauMulta(double valor);
double cauJuros(double dias, double valor);
double vlPagar(double valor, double multa, double juros);
void exibir(double dias, double valor, double multa, double juros, double resultado);

int main() {
	double valor = lerValor();
	double dias = diasAtrasados();
	double multa = cauMulta(valor);
	double juros = cauJuros(dias, valor);
	double resultado = vlPagar(valor, multa, juros);
	exibir(dias, valor, multa, juros, resultado);
}

double lerValor() {
	double valor;
	cout << "Qual é o valor da prestação? ";
	cin >> valor;
	return valor;
}

double diasAtrasados() {
	double dias;
	cout << "\nQuantos dias a prestação está atrasada? ";
	cin >> dias;
	return dias;
}

double cauMulta(double valor) {
	double multa = (valor * 0.02);
	return multa;
}

double cauJuros(double dias, double valor) {
	double juros = (dias / 30) * (valor * 0.01);
	return juros;
}

double vlPagar(double valor, double multa, double juros) {
	double resultado = valor + multa + juros;
	return resultado;
}

void exibir(double dias, double valor, double multa, double juros, double resultado) {
	cout << "A prestação está atrasada a " << dias << " dias\n";
	cout << "O valor original da prestação é " << valor << " reais\n";
	cout << "A multa é de " << multa << " reais\n";
	cout << "O valor dos juros é " << juros << " reais\n";
	cout << "O valor final é " << resultado << " reais\n";
}
