#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;
float guardarA();
float guardarB();
float guardarC();
float calcularDelta(float a, float b, float c);
float calcularx1(float a, float b, float delta);
float calcularx2(float a, float b, float delta);
void exibir(float a, float b, float c);

int main() {
    float a, b, c, delta;
    a = guardarA();
    b = guardarB();
    c = guardarC();
    delta = calcularDelta(a, b, c);

    cout << "O valor de delta é: " << delta << endl;

    if(delta < 0) {
        cout << "Delta não poderá ser negativo!" << endl;
    } else {
        exibir(a, b, c);
    }
}

// Recebe o valor A
float guardarA() {
    float a;
    INICIO:
    cout << "Digite o valor de A ";
    cin >> a;
    if(a == 0) {
        cout << "A não poderá ser zero!" << endl << endl;
        goto INICIO;
    } else {
        return a;
    }
}

// Recebe o valor B
float guardarB() {
    float b;
    cout << "Digite o valor de B ";
    cin >> b;
    return b;
}

// Recebe o valor C
float guardarC() {
    float c;
    cout << "Digite o valor de C ";
    cin >> c;
    return c;
}

// Faz o cálculo do Delta
float calcularDelta(float a, float b, float c) {
    return pow(b, 2) - (4 * a * c);
}

// Faz o cálculo e retorna o x1
float calcularx1(float a, float b, float delta) {
    return (-b + (sqrt(delta) / (2 * a)));
}

// Faz o cálculo e retorna o x2
float calcularx2(float a, float b, float delta) {
    return (-b - (sqrt(delta) / (2 * a))); 
}

// Void para Exibir
void exibir(float a, float b, float c) {
    float delta, x1, x2;
    cout << fixed << setprecision(2);
    cout << setfill('.');
    delta = calcularDelta(a, b, c);
    x1 = calcularx1(a, b, delta);
    x2 = calcularx2(a, b, delta);
    cout << "O valor de Delta é "<< setw(10) << delta << endl;
    cout << "O valor de x1 é " << setw(10) << x1 << endl;
    cout << "O valor de x2 é " << setw(10) << x2 << endl;
}
