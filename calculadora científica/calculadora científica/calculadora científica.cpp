#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>
#include "operacoes.h"
#include "utilitarios.h"
#include "menuPrincipal.h"

using namespace std;

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