#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>

using namespace std;

int menu(int &operacao);
void limparConsole();

int main() {
	setlocale(LC_ALL, "Portuguese");

	int operacao = 0;

	menu(operacao);

	return 0;
}

void limparConsole() {
	cout << "Pressione qualquer tecla para voltar para tentar novamente..." << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	cout << "\033[2J\033[1;1H";
}

int menu(int &operacao) {
	while (operacao != 10) {
		cout << "====================\nBEM VINDO À MINHA CALCULADORA CIENTÍFICA!!!\n====================" << endl;
		cout << "\n DIGITE O NÚMERO AO LADO PARA ESCOLHER A OPERAÇÃO DESEJADA: \n 0 - ADIÇÃO \n 1 - SUBTRAÇÃO \n 2 - MULTIPLICAÇÃO \n 3 - DIVISÃO \n 4 - POTÊNCIA \n 5 - RAIZ QUADRADA \n 6 - LOGARITMO \n 7 - SENO \n 8 - COSSENO \n 9 - TANGENTE\n 10 - SAIR" << endl;
		cout << "Resposta selecionada: ";
		if (!(cin >> operacao)) {
			// Caso o usuário digite LETRAS logo de cara (ex: "abc")
			cout << "ERRO: Digite apenas números!" << endl;
			limparConsole();
			continue;
		}
		if (cin.peek() != '\n' && cin.peek() != EOF) {
			cout << "ERRO: Digite apenas números inteiros sem espaçamento!" << endl;
			limparConsole();
			continue;
		}
		else if(operacao < 0 || operacao > 10) {
			cout << "Operação inválida. Digite apenas números de 0 a 10" << endl;
			limparConsole();

			continue;
		}
	}
	return operacao;
}

