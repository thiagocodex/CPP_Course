//O caractere #, define que o preprocessador executará uma diretiva antecipada ao programa
//A diretiva #include incluirá iostream, que é necessário nesse arquivo apenas para o uso de 'cin'
#include <iostream>

//Criação do protótipo de funcão que está sendo definida em HCppW_Log.cpp e chamada em main() para imprimir: Olá, Mundo!
void HCppW_Log(const char* message);

//A função main é especial, mesmo sendo do tipo inteira, não requer um valor de retorno obrigatório
int main() {
	HCppW_Log("Olá, Mundo!");

	//Usado para que o console continue aberto após a execução do programa
	std::cin.get();
}