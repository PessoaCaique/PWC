#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool anagramaDePalindromo(char *frase)
{
    int contagem[26] = {0}; /* Array utilizada para contar a ocorrência de cada caractere, verificando se há no máximo UM caractere com a contagem ímpar,
    isso ocorrerá pois o caractere do meio será impar, sendo no mínimo 1. Dessa forma, caso as condições sejam atendidas, a frase poderá ser remanejada a fim de formar um palíndromo */
    int contagemImpar = 0;
    int tamanho = strlen(frase);
    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] >= 'a' && frase[i] <= 'z') // Como no Desafio 4, analisa o caractere em questão é minúsculo.
        {
            int index = frase[i] - 'a';
            contagem[index]++;
        }

        else if (frase[i] >= 'A' && frase[i] <= 'Z') // Agora verificando se é maiúsculo.
        {
            int index = frase[i] - 'A';
            contagem[index]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (contagem[i] % 2 != 0) // Verifica se o resto da divisão por 2 da algo diferente de 0, o que significará que a contagem é ímpar.
        {
            contagemImpar++;
        }
    }

    return contagemImpar <= 1;
}

int main()
{
    char frase[] = "racecar";
    bool resultado = anagramaDePalindromo(frase);
    printf("%s", resultado ? "true" : "false"); // Imprimir true ou false no console, dependendo do resultado da função anagramaDePalindromo.

    return 0;
}