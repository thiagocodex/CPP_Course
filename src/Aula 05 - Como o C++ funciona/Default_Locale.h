#pragma once
#include <iostream>

//Definição da localidade do sistema para o console
static char* currentLocale = setlocale(LC_ALL, "");

//Função para mostrar no console a localidade do sistema sempre que incluído este arquivo de cabeçalho
std::ostream& print = std::cout << currentLocale << std::endl << std::endl;