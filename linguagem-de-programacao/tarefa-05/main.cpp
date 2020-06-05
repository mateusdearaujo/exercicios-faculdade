#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

void menu();
void sair();
double guardarA();
double guardarB();
double guardarC();
double calcular(double a, double b, double c);
void exibir(double a, double b, double c, double resultado);

int main() {
    double a, b, c, resultado;
    int escolha;

    INICIO:  
    menu();

    cout << "Escolha a opção " << endl;
    cin >> escolha;

switch(escolha) {
    case 1:
        a = guardarA();
        b = guardarB();
        c = guardarC();
        cout << "Valores digitados!";
        goto INICIO;
        break;
    case 2:
        resultado = calcular(a, b, c);
        cout << "Cálculo executado!";
        goto INICIO;
        break;
    case 3:
        exibir(a, b, c, resultado);
        goto INICIO;
        break;
    case 4:
        cout << "Saindo do programa" << endl;
        goto SAIR;
        break;
    }

    SAIR:
    sair();

    return 0;
}
void menu() {
    cout << endl;
    cout << "|//////////////////////////////////////|" << endl;
    cout << "|/      Programa de Cálculo em C++    /|" << endl;
    cout << "|/  1 - Ler Valores                   /|" << endl;
    cout << "|/  2 - Cálcular a média dos valores  /|" << endl;
    cout << "|/  3 - Exibir o resultado            /|" << endl;
    cout << "|/  4 - Sair do Programa              /|" << endl;
    cout << "|//////////////////////////////////////|" << endl;
}
void sair() {
    cout << "Encerrando o programa...";
    exit(0);
}
double guardarA() {
    double a;
    cout << "Digite o primeiro número: ";
    cin >> a;
    return a;
}
double guardarB() {
    double b;
    cout << "Digite o segundo número: ";
    cin >> b;
    return b;
}
double guardarC() {
    double c;
    cout << "Digite o terceiro número: ";
    cin >> c;
    return c;
}
double calcular(double a, double b, double c) {
    return pow((a * b * c), 3);
}
void exibir(double a, double b, double c, double resultado) {
    cout << fixed << setprecision(2);
    cout << setfill('.');
    cout << "A média geométrica dos valores " << setw(10) << a << ", " << setw(10) << b << ", " << setw(10) << c << " é igual a: " << setw(10) << resultado;
}
