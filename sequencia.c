/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, 
informado um número, ele calcule a sequência de Fibonacci e retorne uma 
mensagem avisando se o número informado pertence ou não a sequência.*/



/* #include <stdio.h>

int calcularSequencia(int num)
{
    int x = 0, y = 1, p;

    //sequencia de primeiros numeros//
    if (num == 0 || num == 1)
    {
        return 1;
    }

    //criação dos proximos numeros da sequencia ate que chegue no numero informado ou o ultrapasse//
    while (p <= num)
    {
        p = x + y;
        x = y;
        y = p;

        //retorna o verdadeiro se for encontrado na sequencia//
        if (p == num)
        {
            return 1;
        }
    }

    //retorna falso//
    return 0;
}

int main()
{
    int numero;

    //pede ao usuario um numero//
    printf("Informe um número: ");
    scanf("%d", &numero);

    //classifica se ele pertence a sequencia de finobacci//
    if (calcularSequencia(numero))
    {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    }
    else
    {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}*/



/*2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, 
além de informar a quantidade de vezes em que ela ocorre.
*/


#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int ocorrencia = 0;

    // pede ao usuario //
    printf("Digite uma palavra ou frase: ");
    fgets(input, sizeof(input), stdin);

    // Contar as letras a //
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == 'a' || input[i] == 'A') {
            ocorrencia++;
        }
    }

    //resultado//
    if (ocorrencia > 0) {
        printf("A letra 'a' aparece %d vez(es) na palavra.\n", ocorrencia);
    } else {
        printf("a letra 'a' não foi encontrada na palavra.\n");
    }

    return 0;
}
