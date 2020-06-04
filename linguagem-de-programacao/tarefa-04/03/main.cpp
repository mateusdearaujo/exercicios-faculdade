#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float guardarA() {
    float a;
    cout << "Digite o primeiro número ";
    cin >> a;
    return a;
}

float guardarB() {
    float b;
    cout << "Digite o segundo número ";
    cin >> b;
    return b;
}

float guardarC() {
    float c;
    cout << "Digite o terceiro número ";
    cin >> c;
    return c;
}

float calcular(float a, float b, float c) {
    a = pow(a, 2);
    b = pow(b, 2);
    c = pow(c, 2);
    return a + b + c;
}

void exibir(float a, float b, float c, float resultado) {
    cout << "A soma dos quadrados dos valores " << a << ", " << b << ", e " << c << " é " << resultado; 
}

int main() {
    float a, b, c, resultado;
    a = guardarA();
    b = guardarB();
    c = guardarC();
    resultado = calcular(a, b, c);
    exibir(a, b, c, resultado);
}
