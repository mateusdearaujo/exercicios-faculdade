1- Declarar valorA(), valorB(), calcular() e exibir();
2- Ler valorA() e valorB();
3- calcular();
3- exibir();

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float valorA() {
    float a;
    cout << "Digite o primeiro valor: ";
    cin >> a;
    return a;
}

float valorB() {
    float b;
    cout << "Digite o segundo valor: ";
    cin >> b;
    return b;
}

float calcular(float a, float b) {
    float resultado;
    resultado = a - b;
    resultado = pow(resultado, 2);
    return resultado;
}

void exibir(float a, float b, float resultado) {
    cout << "O quadrado da diferença entre " << a << " e " << b << " é: " << resultado;
}

int main() {
    float a, b, resultado;
    a = valorA();
    b = valorB();
    resultado = calcular(a, b);
    exibir(a, b, resultado);
    return 0;
}
