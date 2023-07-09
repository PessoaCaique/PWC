#include <stdio.h>
#include <string.h>

void removeDuplicatas(char *frase)
{
    int tamanho = strlen(frase);

    for (int i = 0; i < tamanho; i++) // Percorre a frase externamente, representando o caractere que estamos analisando.
    {
        for (int j = i + 1; j < tamanho; j++) // Percorre a frase internamente, representando a posição seguinte do caractere que estamos analisando, comparando os dois caracteres.
        {
            if (frase[i] == frase[j]) // Caractere duplicado é encontrado e removido
            {
                for (int k = j; k < tamanho; k++) // Para isso, movemos todos os caracteres uma posição para a esquerda, excluindo o caractere repetido
                {
                    frase[k] = frase[k + 1];
                }
                tamanho--; // Reduz o comprimento da frase
                j--;       // Retorna o índice para continuar verificando o caractere atual
            }
        }
    }
    printf("%s", frase);
}

int main()
{
    char frase[] = "Hello, World!";
    removeDuplicatas(frase);

    return 0;
}