#include <iostream>
#include <tchar.h>

int main(){

	/*Função que configura o console windows para mostrar acentos*/
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	//Declaração de variáveis
	//Primeiro colocamos qual tipo de variável desejamos que o computador crie
	//ao executar nosso programa, neste caso ambas como int(integer/inteiro)
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "*****INICIO DO JOGO******" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	std::cout << "Tamanho da variável NumVidas: " << sizeof(NumVidas) << "Bytes" << "\n";
	std::cout << "Tamanho da variável Pontuação: " << sizeof(Score) << "Bytes" << "\n";
	std::cout << "Endereço que NumVidas ocupa na memória RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que Pontuação ocupa na memória RAM: " << &Score << "\n";
	std::cout << "***********" << std::endl;
	
	
	std::cout << "*****DURANTE O JOGO******" << std::endl;
	Score = Score + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	
	
	system("pause");

}