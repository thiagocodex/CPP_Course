#pragma once
#include <iostream>

//Defini��o da localidade do sistema para o console
static char* currentLocale = setlocale(LC_ALL, "");

//Fun��o para mostrar no console a localidade do sistema sempre que inclu�do este arquivo de cabe�alho
std::ostream& print = std::cout << currentLocale << std::endl << std::endl;