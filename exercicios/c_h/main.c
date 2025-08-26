#include <stdio.h>
#include "saudacao.h"

int main(){
    printf("Hello World from C");

    struct saudacao s;
    s.nome[0] = 'E';
    s.nome[1] = 'd';
    s.nome[2] = 'i';

    printf("\n%s", s.nome);

    return 0;
}