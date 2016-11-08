/**      @file: 08-decremento.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador de decremento. */

#include <stdio.h>

int main () {
    int i;
    printf("Incremento:\n");

    i = 5;
    printf("(i = 5) O valor armazenado em i é: %d.\n", i);
    --i;
    /* O operador -- acessa o valor armazenado na variável i, subtrai 1 deste
     * valor, e atribui o valor resultante a variável i.
     *
     * É equivalente a instrução:
     *      i = i - 1;                                                        */
    printf("( --i ) O valor armazenado em i é: %d.\n", i);

    i--;
    printf("( i-- ) O valor armazenado em i é: %d.\n", i);

    printf("\n***** Atenção: --i *****\n\n");

    printf("A próxima instrução a ser executada é:\n");
    printf("    printf(\"O valor armazenado em i é: %%d.\\n\", --i);\n\n");
    printf("O valor armazenado em i é: %d.\n", --i);
    printf("\nE agora valor armazenado em i é: %d.\n", i);

    printf("\n *** Atenção: i-- ***\n\n");

    printf("A próxima instrução a ser executada é:\n");
    printf("    printf(\"O valor armazenado em i é: %%d.\\n\", i--);\n\n");
    printf("O valor armazenado em i é: %d.\n", i--);
    printf("\nMas na verdade o valor armazenado em i é: %d.\n", i);

    /* As operações
     *     printf("O valor armazenado em i é: %d.\n", --i);
     *     printf("O valor armazenado em i é: %d.\n", i--);
     *
     * apresentam resultados diferentes. */

    return 0; /* Não houve erro(s). */
}