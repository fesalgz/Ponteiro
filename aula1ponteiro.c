//incluindo bibliotecas
#include <stdio.h>

/*
se nao colocar o *, so vai receber o valor dentro da caixa (variavel)
Vamos receber um endere�o de memoria que aponta para um tipo inteiro
(int* shaba)
*/

void incrementa (int* shaba) {

    printf("Antes de incrementar.\n");
    //pra puxar o valor da caixa, colocar um * e entre parenteses
    //senao imprime o endere�o da memoria
    printf("O contador vale %d\n", (*shaba));
    //para imprimir o endere�o de memoria, preciso tirar o &
    //por que ja estou recebendo o end.
    printf("O contador vale %d\n\n", shaba);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++(*shaba));
    printf("O contador vale %d\n\n", shaba);

}

int main() {

    int shaba = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", shaba);
    printf("O contador vale %d\n\n", &shaba);

    /*incrementando o endere�o de memoria
    quando colocamos o &, eu levo o endere�o da memoria*/
    incrementa(&shaba);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", shaba);
    printf("O contador vale %d\n\n", &shaba);

    return 0;
}

//
