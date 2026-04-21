#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>
#include "utilitarios.h"
#include "operacoes.h"
#include "menuPrincipal.h"

using namespace std;

void adicao() {
	float numero1, numero2, resultado;

	digitarNumeros(numero1, numero2);

	limparConsole();
	resultado = numero1 + numero2;
	cout << numero1 << " + " << numero2 << " = " << resultado << endl;
}

void subtracao() {
	float numero1, numero2, resultado;

	digitarNumeros(numero1, numero2);

	limparConsole();
	resultado = numero1 - numero2;
	cout << numero1 << " - " << numero2 << " = " << resultado << endl;
}

void multiplicacao() {
	float numero1, numero2, resultado;

	digitarNumeros(numero1, numero2);

	limparConsole();
	resultado = numero1 * numero2;
	cout << numero1 << " * " << numero2 << " = " << resultado << endl;
}

void divisao() {
	float numero1, numero2, resultado;

	digitarNumeros(numero1, numero2);

	limparConsole();
	resultado = numero1 / numero2;
	cout << numero1 << " / " << numero2 << " = " << resultado << endl;
}

void potencia() {
	float numero1 = 0;
	float numero2 = 0;
	float resultado = 0;

	while (true) {
		cout << "Digite o número  da base: ";
		if (!(cin >> numero1)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		cout << "Digite o número do expoente: ";
		if (!(cin >> numero2)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		else {
			limparConsole();
			resultado = pow(numero1, numero2);
			cout << numero1 << " ^ " << numero2 << " = " << resultado << endl;
		}
		break;
	}
}

void raiz() {
	float numero1 = 0;
	float numero2 = 0;
	float resultado = 0;

	while (true) {
		cout << "Digite o número  do radicando: ";
		if (!(cin >> numero1)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		cout << "Digite o número do indice: ";
		if (!(cin >> numero2)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		else {
			limparConsole();
			resultado = pow(numero1, 1 / numero2);
			cout << "A raiz " << numero2 << " de " << numero1 << " é " << resultado << endl;
		}
		break;
	}
}

void logaritmo() {
	float numero1 = 0;
	float numero2 = 0;
	float resultado = 0;

	while (true) {
		cout << "Digite o número  de sua base: ";
		if (!(cin >> numero1)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		cout << "Digite o número do logaritmo: ";
		if (!(cin >> numero2)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		else {
			limparConsole();
			resultado = log(numero2) / log(numero1);
			cout << "O logaritmo de " << numero2 << " na base " << numero1 << " é " << resultado << endl;
		}
		break;
	}
}

void seno() {
	const double pi = 3.14159265358979323846;
	float grau = 0;

	while (true) {
		cout << "Digite o número  do grau: ";
		if (!(cin >> grau)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}

		float radiano = grau * (pi / 180);
		float seno = sin(radiano);

		limparConsole();
		seno = sin(radiano);
		cout << "O seno de " << grau << " graus é " << seno << endl;

		break;
	}
}

void cosseno() {
	const double pi = 3.14159265358979323846;
	float grau = 0;
	float cosseno = 0;
	float radiano = 0;

	while (true) {
		cout << "Digite o número  do grau: ";
		if (!(cin >> grau)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		else {
			limparConsole();
			radiano = grau * (pi / 180);
			cosseno = cos(radiano);
			cout << "O cosseno de " << grau << " graus é " << cosseno << endl;
			break;
		}
	}
}

void tangente() {
	const double pi = 3.14159265358979323846;
	float grau = 0;
	float tangente = 0;
	float radiano = 0;

	while (true) {
		cout << "Digite o número  do grau: ";
		if (!(cin >> grau)) {
			cout << "ERRO: Digite apenas números!" << endl;
			erroConsole();
			continue;
		}
		else {
			limparConsole();
			radiano = grau * (pi / 180);
			tangente = tan(radiano);
			cout << "A tangente de " << grau << " graus é " << tangente << endl;
			break;
		}
	}
}