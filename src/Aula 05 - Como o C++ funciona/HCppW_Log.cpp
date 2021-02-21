//A inclusão de iostream é necessária para o uso de 'cout'
#include <iostream>

//Função criada no arquivo HCppW_Main.cpp e definida em HCppW_Log.cpp para imprimir uma mensagem
void HCppW_Log(const char* message) {
	std::cout << message << std::endl;
}