//incluindo bibliotecas
#include <stdio.h>

void incrementa (int shaba) {

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", shaba);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++shaba);



}



int main() {

    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador);

    incrementa(contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);

    return 0;
}
