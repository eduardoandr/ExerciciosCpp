#include <iostream>
#include <iomanip>

int main(){

	int Numero = 45;
	float Numero2 = 55.56f;
	double Numero3 = 45345.904555;
	char Caractere = '3';
	char Caractere2 = 'k';
	bool bAchou;

	bAchou = 1;
	std::cout << "Valor de bAchou :" << bAchou << "\n";
	bAchou = 0;
	std::cout << "Valor de bAchou :" << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou :" << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou :" << bAchou << "\n";
	bAchou = 'd';
	std::cout << "Valor de bAchou :" << bAchou << "\n";

	std::cout << "Valor numero: " << Numero << "\n";
	std::cout << "Tamanho da variavel numero: " << sizeof(Numero) << "Bytes" << "\n";
	std::cout << "Local armazenado na memoria: " << &Numero << "\n";

	std::cout << "Valor numero2: " << Numero2 << "\n";
	std::cout << "Tamanho da variavel numero2: " << sizeof(Numero2) << "Bytes" << "\n";
	std::cout << "Local armazenado na memoria: " << &Numero2 << "\n";

	std::cout << "Valor numero3: " << std::setprecision(10) << Numero3 << "\n";
	std::cout << "Tamanho da variavel numero3: " << sizeof(Numero3) << "Bytes" << "\n";
	std::cout << "Local armazenado na memoria: " << &Numero3 << "\n";

	std::cout << "Valor caractere: " << Caractere << "\n";
	std::cout << "Tamanho da variavel caractere: " << sizeof(Caractere) << "Bytes" << "\n";
	std::cout << "Local armazenado na memoria: " << (void *)& Caractere << "\n";

	std::cout << "Valor caractere2: " << Caractere2 << "\n";
	std::cout << "Tamanho da variavel caractere2: " << sizeof(Caractere2) << "Bytes" << "\n";
	std::cout << "Local armazenado na memoria: " << (void *)&Caractere2 << "\n";
	system("pause");
	return 0;


}
