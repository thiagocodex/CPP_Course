//O caractere #, define que o preprocessador executar� uma diretiva antecipada ao programa
//A diretiva #include incluir� iostream, que � necess�rio nesse arquivo apenas para o uso de 'cin'
#include <iostream>

//Cria��o do prot�tipo de func�o que est� sendo definida em HCppW_Log.cpp e chamada em main() para imprimir: Ol�, Mundo!
void HCppW_Log(const char* message);

//A fun��o main � especial, mesmo sendo do tipo inteira, n�o requer um valor de retorno obrigat�rio
int main() {
	HCppW_Log("Ol�, Mundo!");

	//Usado para que o console continue aberto ap�s a execu��o do programa
	std::cin.get();
}