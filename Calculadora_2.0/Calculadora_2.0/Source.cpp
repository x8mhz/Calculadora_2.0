#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	static int numerador = 0, denominador = 0;
	char op;

	while (1)
	{
		cout << " |-------------------------|\n";
		cout << " |   CALCULADORA SIMPLES   |\n";
		cout << " |-------------------------|\n\n";
		cout << " >> ";

		if (!(cin >> numerador))
		{
			cerr << " ERRO: Numerador Inv�lido.\n\n";
			cin.clear();
			cin.ignore(1000, '\n');
			system("PAUSE");
			system("CLS");
			main();
		}

		while (cin >> op)
		{
			if (op != '=')
			{
				if (!(cin >> denominador))
				{
					cerr << " ERRO: Denominador Inv�lido.\n\n";
					cin.clear();
					cin.ignore(1000, '\n');
					system("PAUSE");
					system("CLS");
					main();
				}
			}

			switch (op)
			{
			case '+':
				numerador += denominador;
				break;

			case '-':
				numerador -= denominador;
				break;

			case '*':
				numerador *= denominador;
				break;

			case '/':
				numerador /= denominador;
				break;

			default:
				if (!(op == '='))
				{
					cerr << " ERRO: Operador inv�lido!\n\n";
					cin.clear();
					cin.ignore(1000, '\n');
					system("PAUSE");
					system("CLS");
					main();
					break;
				}

				cout << "\n Resultado: " << numerador << endl << endl;
				system("PAUSE");
				system("CLS");
				main();
			}
		}
	}
	return 0;
}


