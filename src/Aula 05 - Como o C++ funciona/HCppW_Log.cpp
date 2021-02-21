//A inclusão de iostream é necessária para o uso de 'cout'
#include <iostream>

//Inclusão de um arquivo de cabeçalho feito por mim com o objetivo de alterar a saída do console do sistema para o local do sistema no windows 7, a fim de imprimir corretamente os caracteres com acentuação e a apresentação do nome desse idioma no console (não incluído nas vídeo-aulas)
#include "Default_Locale.h"

//Função criada no arquivo HCppW_Main.cpp e definida em HCppW_Log.cpp para imprimir uma mensagem
void HCppW_Log(const char* message) {
	std::cout << message << std::endl;
}