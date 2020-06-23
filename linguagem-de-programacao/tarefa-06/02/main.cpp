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
float cal_s(float a, float b, float c);
float cal_ah(float a, float b, float c, float s);
void exibir(float a, float b, float c, float s, float ah);

int main() {
    int tecla = 0;
    float a, b, c, s, ah;

    MENU:
    cout << endl;
    cout << "Escolha uma opção" << endl;
    cout << "1 - Ler 3 Valores" << endl;
    cout << "2 - Cálcular os Valores" << endl;
    cout << "3 - Exibir os Valores"<< endl;
    cout << "4 - Sair do Programa" << endl;
    cin >> tecla;
    if(tecla == 1) {
        a = guardarA();
        b = guardarB();
        c = guardarC();
        goto MENU;
    } else if(tecla == 2) {
        s = cal_s(a, b, c);
        ah = cal_ah(a, b, c, s);
        cout << "Cálculos executados" << endl;
        goto MENU;
    } else if(tecla == 3) {
        exibir(a, b, c, s, ah);
        goto MENU;
    } else {
        cout << "Encerrando o programa" << endl;
        exit(0);
    }
}

// Guarda o valor de A
float guardarA() {
    float a;
    cout << "Digite o valor de A ";
    cin >> a;
    return a;
}

// Guarda o valor de B
float guardarB() {
    float b;
    cout << "Digite o valor de B ";
    cin >> b;
    return b;
}

// Guarda o valor de C
float guardarC() {
    float c;
    cout << "Digite o valor de C ";
    cin >> c;
    return c;
}

// Cálculo S
float cal_s(float a, float b, float c) {
    return (a + b + c) / 2;
}

// Cálculo AH
float cal_ah(float a, float b, float c, float s) {
    return pow(s * (s - a) * (s - b) * (s - c) , 2);
}

// Exibir
void exibir(float a, float b, float c, float s, float ah) {
    cout << "O valor de A é: " << a << endl;
    cout << "O valor de B é: " << b << endl;
    cout << "O valor de C é: " << c << endl;
    cout << "O valor de S é: " << s << endl;
    cout << "O valor de AH é: " << ah << endl;
}
