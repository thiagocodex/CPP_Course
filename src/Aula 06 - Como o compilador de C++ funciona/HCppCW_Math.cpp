//Cria��o e defini��o de uma fun��o para mostrar uma mensagem
const char* HCppCW_Log(const char* message) {
	return message;
}

//A diretiva #define diz ao preprocessador que 'CUSTOMTYPE' deve ser traduzido como 'int'
#define CUSTOMTYPE int

//Foi apresentado no curso como � feita a montagem (assembly) dessa fun��o no arquivo HCppCW_Math.asm gerado
CUSTOMTYPE Multiply(CUSTOMTYPE a, CUSTOMTYPE b) {
	HCppCW_Log("Multiplica��o");
	return a * b;

//Inclus�o do fechamento do bloco (n�o fa�a isso, aqui est� apenas por motivos did�ticos)
#include "HCppCW_EndBrace.h"