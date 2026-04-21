#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>
#include "operacoes.h"
#include "utilitarios.h"
#include "menuPrincipal.h"

using namespace std;

int menu(int& operacao) {
	while (operacao != 10) {
		cout << "====================\nBEM VINDO À MINHA CALCULADORA CIENTÍFICA!!!\n====================" << endl;
		cout << "\n DIGITE O NÚMERO AO LADO PARA ESCOLHER A OPERAÇÃO DESEJADA: \n 0 - ADIÇÃO \n 1 - SUBTRAÇÃO \n 2 - MULTIPLICAÇÃO \n 3 - DIVISÃO \n 4 - POTÊNCIA \n 5 - RAIZ \n 6 - LOGARITMO \n 7 - SENO \n 8 - COSSENO \n 9 - TANGENTE\n 10 - SAIR" << endl;
		cout << "Resposta selecionada: ";
		if (!(cin >> operacao)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		if (cin.peek() != '\n' && cin.peek() != EOF) {
			cout << "ERRO: Digite apenas números inteiros sem espaçamento!" << endl;
			erroConsole();
			continue;
		}
		else if (operacao < 0 || operacao > 10) {
			cout << "Operação inválida. Digite apenas números de 0 a 10" << endl;
			erroConsole();

			continue;
		}
		limparConsole();
		break;
	}
	return operacao;
}

void digitarNumeros(float& numero1, float& numero2) {
	while (true) {
		cout << "Digite o primeiro número: ";
		if (!(cin >> numero1)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		cout << "Digite o segundo número: ";
		if (!(cin >> numero2)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		break;
	}
}