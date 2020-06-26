#include <iostream>

using namespace std;

double lerbase();
double leraltura();
double calcularMedia(double base, double altura);
double calcular_Media(double saldo, double contador);
double calcarea(double base, double altura);
void exibir(double base, double altura, double area, double media, double contador, double saldo, double mediageral);

int main ( ) { 
    double base, altura, area, media, saldo, mediageral;
    int tecla = 0;
    int contador = 1;
    
    while(tecla != 4) {
        cout << "\nmenu\n1 Ler\n2 Calcular\n3 Exibir\n4 Sair\nItem:";
        cin >> tecla;
        if(tecla == 1) { 
            base = lerbase();
            altura = leraltura();
        } else if(tecla == 2) {
            area = calcarea(base, altura);
            media = calcularMedia(base, altura);
            mediageral = calcular_Media(saldo, contador);

            system("clear");
            cout << "\nCálculo bem sucedido!";

            saldo = saldo + area;
            contador++;
            system("pause");
        } else if(tecla == 3) {
            exibir(base, altura, area, media, contador, saldo, mediageral);
        }
    }
    cout << "\nPrograma finalizado!\n";
    system("pause");
    return 0;
}

// Lê a base
double lerbase() {
    double base;
    cout << "\nLer Base:";
    system("clear");
    cin >> base;
    return base;
}

// Lê a altura
double leraltura() {
    double altura;
    cout << "\nLer Altura:";
    system("clear");
    cin >> altura;
    return altura;
}

// Cálcula média de um único item
double calcularMedia(double base, double altura) {
    double media;
    return media = (base + altura) / 2;
}

// Média de todos os itens
double calcular_Media(double saldo, double contador) {
    return saldo / contador;
}

// Cálcula a área
double calcarea(double base, double altura) {
    double area;
    area = (base * altura) / 2;
    return area;
}

// Void para exibir
void exibir(double base, double altura, double area, double media, double contador, double saldo, double mediageral) {
    system("clear");
    cout << "Exibindo...\n";
    cout << "\nÚltima base calculada..: " << base;
    cout << "\nÚltima altura calculada..: " << altura;
    cout << "\nMédia do último cálculo..: " << media;
    cout << "\nÚltima área calculada..: " << area;
    cout << "\nO Cálculo foi executado " << contador << " vezes";
    cout << "\nSaldo das áreas..: " << saldo;
    cout << "\nMédia geral..: " << mediageral;
}
