#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>

using namespace std;

int menu(int &operacao);
void erroConsole();
void limparConsole();
float adicao();
float subtracao();
bool funcaoExecutarPrograma();
float multiplicacao();
float divisao();

int main() {
	setlocale(LC_ALL, "Portuguese");

	int operacao = 0;

	bool executarPrograma = true;

	while (executarPrograma == true) {
		menu(operacao);

		switch (operacao) {
		case 0:
			adicao();
			break;
		case 1:
			subtracao();
			break;
		case 2:
			multiplicacao();
			break;
		case 3:
			divisao();
			break;
		}
		executarPrograma = funcaoExecutarPrograma();
	}

	return 0;
}

bool funcaoExecutarPrograma() {
	string resposta;

	cout << "Deseja executar uma nova operação? (Digite 'sim' para sim ou qualquer outra coisa para não." << endl;
	cout << "resposta: ";
	cin >> resposta;
	limparConsole();
	if (resposta == "sim") {
		return true;
	}
	else {
		return false;
	}
}

void erroConsole() {
	cout << "Pressione qualquer tecla para voltar para tentar novamente..." << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	cout << "\033[2J\033[1;1H";
}

void limparConsole() {
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "\033[2J\033[1;1H";
}

int menu(int &operacao) {
	while (operacao != 10) {
		cout << "====================\nBEM VINDO À MINHA CALCULADORA CIENTÍFICA!!!\n====================" << endl;
		cout << "\n DIGITE O NÚMERO AO LADO PARA ESCOLHER A OPERAÇÃO DESEJADA: \n 0 - ADIÇÃO \n 1 - SUBTRAÇÃO \n 2 - MULTIPLICAÇÃO \n 3 - DIVISÃO \n 4 - POTÊNCIA \n 5 - RAIZ QUADRADA \n 6 - LOGARITMO \n 7 - SENO \n 8 - COSSENO \n 9 - TANGENTE\n 10 - SAIR" << endl;
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
		else if(operacao < 0 || operacao > 10) {
			cout << "Operação inválida. Digite apenas números de 0 a 10" << endl;
			erroConsole();

			continue;
		}
		limparConsole();
		break;
	}
	return operacao;
}

float adicao() {
	float numero1 = 0;
	float numero2 = 0;
	float resultado = 0;

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
		else {
			limparConsole();
			resultado = numero1 + numero2;
			cout << numero1 << " + " << numero2 << " = " << resultado << endl;
		}
		break;
		return 0;
	}
}
float subtracao() {
	float numero1 = 0;
	float numero2 = 0;
	float resultado = 0;

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
		else {
			limparConsole();
			resultado = numero1 - numero2;
			cout << numero1 << " - " << numero2 << " = " << resultado << endl;
		}
		break;
		return 0;
	}
}
float multiplicacao() {
	float numero1 = 0;
	float numero2 = 0;
	float resultado = 0;

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
		else {
			limparConsole();
			resultado = numero1 * numero2;
			cout << numero1 << " * " << numero2 << " = " << resultado << endl;
		}
		break;
		return 0;
	}
}
float divisao() {
	float numero1 = 0;
	float numero2 = 0;
	float resultado = 0;

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

		if (numero1 == 0 || numero2 == 0) {
			cout << "ERRO, nenhum número pode ser dividido por 0!";
			erroConsole();
			continue;
		}
		else {
			limparConsole();
			resultado = numero1 / numero2;
			cout << numero1 << " / " << numero2 << " = " << resultado << endl;
		}
		break;
		return 0;
	}
}
float potencia() {
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
			resultado = numero1 *& numero2;
			cout << numero1 << " / " << numero2 << " = " << resultado << endl;
		}
		break;
		return 0;
	}
}
