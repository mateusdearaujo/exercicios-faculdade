#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float guardarCotacao() {
    float cotacao;
    cout << "Qual é a cotação atual do Dólar? ";
    cin >> cotacao;
    return cotacao;
}

float guardarDolar() {
    float dolar;
    cout << "Qual o valor que será convertido para real? ";
    cin >> dolar;
    return dolar;
}

float valorConversao(float cotacao, float dolar) {
    return dolar * cotacao;
}

void exibir(float dolar, float cotacao, float real) {
    cout << "O valor de $ " << dolar << " dólar convertido com a cotação de " << cotacao << " é igual a R$ " << real;
}

int main() {
    float dolar, cotacao, real;
    dolar = guardarDolar();
    cotacao = guardarCotacao();
    real = valorConversao(dolar, cotacao);
    exibir(dolar, cotacao, real);
    return 0;
}
