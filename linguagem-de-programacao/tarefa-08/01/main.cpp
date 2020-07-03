#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

void display(float salaryMale, float salaryFemale, float mediaMale, float mediaFemale);
void menu();

int main() {
	float salaryMale, salaryFemale, salary, mediaMale, mediaFemale;
	int counterMale = 1;
	int counterFemale = 1;

	int choice;
	string sex;

	START:
	menu();

	cout << "Escolha a opção" << endl;
	cin >> choice;
	system("clear");
	switch (choice) {
		case 1:
		cout << "Digite o sexo: ";
		cin >> sex;

			if(sex == "f" || sex == "F") {
				cout << "Digite o salário: ";
				cin >> salary;
				salaryFemale = salaryFemale + salary;
				mediaFemale = salaryFemale / counterFemale;
				counterFemale++;
				system("clear");
			} else if(sex == "m" || sex == "M") {
				cout << "Digite o salário: ";
				cin >> salary;
				salaryMale = salaryMale + salary;
				mediaMale = salaryMale / counterMale;
				counterMale++;
				system("clear");
			} else {
				cout << "Sexo inválido, digite novamente!";
			}
			goto START;
		break;

		case 2:
			display(salaryMale, salaryFemale, mediaMale, mediaFemale);
			goto START;
		break;

		case 3:
			exit(0);
		break;
	default:
		break;
	}
}

void display(float salaryMale, float salaryFemale, float mediaMale, float mediaFemale) {
	cout << fixed;
    cout.precision(2);
	cout << "Salário total dos Homens: " << salaryMale << endl;
	cout << "Média geral do salário dos Homens: " << mediaMale << endl;
	cout << "Salário geral das Mulheres: " << salaryFemale << endl;
	cout << "Média geral do salário das Mulheres: " << mediaFemale << endl;
}

void menu() {
    cout << endl;
    cout << "|//////////////////////////////////////|" << endl;
    cout << "|/      Selecionar Opção              /|" << endl;
    cout << "|/  1 - Iniciar Programa              /|" << endl;
    cout << "|/  2 - Exibir Resultados             /|" << endl;
    cout << "|/  3 - Encerrar o programa           /|" << endl;
    cout << "|//////////////////////////////////////|" << endl;
}
