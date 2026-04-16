#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>

using namespace std;

int menu(int &operacao);
void erroConsole();
void limparConsole();
void digitarNumeros();
void adicao();
void subtracao();
bool reexecutarPrograma();
void multiplicacao();
void divisao();
void potencia();
float raiz();
float logaritmo();
float seno();
float cosseno();
float tangente();

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
		case 4:
			potencia();
			break;
		case 5:
			raiz();
			break;
		case 6:
			logaritmo();
			break;
		case 7:
			seno();
			break;
		case 8:
			cosseno();
			break;
		case 9:
			tangente();
			break;
		case 10:
			cout << "Obrigado por usar minha calculadora científica, até a próxima!" << endl;
			return 0;
		}
		executarPrograma = reexecutarPrograma();
	}

	return 0;
}

bool reexecutarPrograma() {
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

void digitarNumeros(float &numero1, float &numero2) {
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
float raiz() {
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
		return 0;
	}
}
float logaritmo() {
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
		return 0;
	}
}
float seno() {
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
		return 0;
	}
}
float cosseno() {
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
			return 0;
		}
	}
}
float tangente() {
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
			return 0;
		}
	}
}