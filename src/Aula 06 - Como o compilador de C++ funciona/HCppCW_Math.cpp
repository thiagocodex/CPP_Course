//Criação e definição de uma função para mostrar uma mensagem
const char* HCppCW_Log(const char* message) {
	return message;
}

//A diretiva #define diz ao preprocessador que 'CUSTOMTYPE' deve ser traduzido como 'int'
#define CUSTOMTYPE int

//Foi apresentado no curso como é feita a montagem (assembly) dessa função no arquivo HCppCW_Math.asm gerado
CUSTOMTYPE Multiply(CUSTOMTYPE a, CUSTOMTYPE b) {
	HCppCW_Log("Multiplicação");
	return a * b;

//Inclusão do fechamento do bloco (não faça isso, aqui está apenas por motivos didáticos)
#include "HCppCW_EndBrace.h"