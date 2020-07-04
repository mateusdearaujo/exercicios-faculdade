#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

float salaryBigger(float salary, float adultHighestSalary);
float salarySmaller(float salary, float adultSmallerSalary);
void display(float adultHighestSalary, float adultSmallerSalary, int biggerCount, float youngHighestSalary, float youngSmallerSalary, int youngCount);
void menu();

int main() {
	float salary, adultHighestSalary, youngHighestSalary;
	float adultSmallerSalary = 0;
	float youngSmallerSalary = 0;
	int choice;
	int biggerCount = 0;
	int youngCount = 0;

	START:
	menu();

	cout << "Escolha uma opção: ";
	cin >> choice;
	system("clear");

	switch (choice)	{
		case 1:
			cout << "Digite o seu salário: ";
			cin >> salary;
			
			if(adultSmallerSalary == 0) {
				adultSmallerSalary = salary;
			}
			
			adultHighestSalary = salaryBigger(salary, adultHighestSalary);
			adultSmallerSalary = salarySmaller(salary, adultSmallerSalary);
			biggerCount++;
			goto START;
		break;
		case 2:
			cout << "Digite o seu salário: ";
			cin >> salary;
			
			if(youngSmallerSalary == 0) {
				youngSmallerSalary = salary;
			}

			youngHighestSalary = salaryBigger(salary, youngHighestSalary);
			youngSmallerSalary = salarySmaller(salary, youngSmallerSalary);
			youngCount++;
			goto START;
		break;
		case 3:
			display(adultHighestSalary, adultSmallerSalary, biggerCount, youngHighestSalary, youngSmallerSalary, youngCount);
			goto START;
		break;
		case 4:
			exit(0);
	default:
		break;
	}
}

float salaryBigger(float salary, float highestSalary) {
	if(salary > highestSalary) {
		return salary;
	} else {
		return highestSalary;
	}
}

float salarySmaller(float salary, float smallerSalary) {
	if(salary < smallerSalary) {
		return salary;
	} else {
		return smallerSalary;
	}
}

void display(float adultHighestSalary, float adultSmallerSalary, int biggerCount, float youngHighestSalary, float youngSmallerSalary, int youngCount) {
	cout << fixed;
    cout.precision(2);
	cout << "Quantidade de Adultos: " << biggerCount << endl;
	cout << "O maior salário de um adulto é: " << adultHighestSalary << endl;
	cout << "O menor salário de um adulto é: " << adultSmallerSalary << endl;
	cout << "\n--------------------------------------------------------------\n";
	cout << "Quantidade de Jovens: " << youngCount << endl;
	cout << "O maior salário de um jovem é: " << youngHighestSalary << endl;
	cout << "O menor salário de um jovem é: " << youngSmallerSalary << endl;
}

void menu() {
	cout << endl;
    cout << "|//////////////////////////////////////|" << endl;
    cout << "|/      Selecionar Opção              /|" << endl;
    cout << "|/  1 - Maior de Idade                /|" << endl;
    cout << "|/  2 - Menor de Idade                /|" << endl;
    cout << "|/  3 - Exibir                        /|" << endl;
	cout << "|/  4 - Encerrar o programa           /|" << endl;
    cout << "|//////////////////////////////////////|" << endl;
}
