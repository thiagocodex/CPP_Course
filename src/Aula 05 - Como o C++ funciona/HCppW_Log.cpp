//A inclus�o de iostream � necess�ria para o uso de 'cout'
#include <iostream>

//Inclus�o de um arquivo de cabe�alho feito por mim com o objetivo de alterar a sa�da do console do sistema para o local do sistema no windows 7, a fim de imprimir corretamente os caracteres com acentua��o e a apresenta��o do nome desse idioma no console (n�o inclu�do nas v�deo-aulas)
#include "Default_Locale.h"

//Fun��o criada no arquivo HCppW_Main.cpp e definida em HCppW_Log.cpp para imprimir uma mensagem
void HCppW_Log(const char* message) {
	std::cout << message << std::endl;
}