#include <iostream>
#include <string>
#include <locale.h>
#include <limits>
#include "utilitarios.h"

using namespace std;

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