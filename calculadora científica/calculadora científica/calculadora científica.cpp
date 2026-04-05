#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int menu();
void limparConsole();

int main() {
	setlocale(LC_ALL, "Portuguese");

	int a = menu();
	double numero1 = 0, numero2 = 0, resultado = 0;

	return 0;
}

void limparConsole() {
	cout << "Pressione qualquer tecla para voltar para tentar novamente..." << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	cout << "\033[2J\033[1;1H";
}

int menu() {
	int operacao = 0;
	while (operacao != 10) {
		cout << "====================\nBEM VINDO À MINHA CALCULADORA CIENTÍFICA!!!\n====================" << endl;
		cout << "\n DIGITE O NÚMERO AO LADO PARA ESCOLHER A OPERAÇÃO DESEJADA: \n 0 - ADIÇÃO \n 1 - SUBTRAÇÃO \n 2 - MULTIPLICAÇÃO \n 3 - DIVISÃO \n 4 - POTÊNCIA \n 5 - RAIZ QUADRADA \n 6 - LOGARITMO \n 7 - SENO \n 8 - COSSENO \n 9 - TANGENTE\n 10 - SAIR" << endl;
		cout << "RESPOSTA SELECIONADA: ";

		if(!(cin >> operacao)) {
			cout << "OPERAÇÃO INVÁLIDA! POR FAVOR, DIGITE UM NÚMERO ENTRE 0 E 10." << endl;
			limparConsole();

			continue;
		}
		else if(operacao < 0 || operacao > 10) {
			cout << "OPERAÇÃO INVÁLIDA! POR FAVOR, DIGITE UM NÚMERO ENTRE 0 E 10." << endl;
			limparConsole();

			continue;
		}
	}

	return operacao;
}