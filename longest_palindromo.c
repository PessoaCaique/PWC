#include <stdio.h>
#include <string.h>

int detectaPalindromo(char *substring, int inicio, int fim) // Saber se essa substring é um palindromo ou não.
{
    while (inicio < fim)
    {
        if (substring[inicio] != substring[fim]) // Não é um palindromo
        {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1; // Palindromo detectado!
}

void maiorPalindromo(char *frase) // Analisar todas as possíveis substrings da frase para encontrar o maior palindromo possível.
{
    int tamanho = strlen(frase);
    int tamanhoMaximo = 0;
    int inicio = 0, fim = 0;

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            if (detectaPalindromo(frase, i, j)) // Verificar se é um palindromo.
            {
                int tamanhoAtual = j - i + 1;
                if (tamanhoAtual > tamanhoMaximo) // Atualizar o comprimento máximo e as posições inicial e final.
                {
                    tamanhoMaximo = tamanhoAtual;
                    inicio = i;
                    fim = j;
                }
            }
        }
    }
    for (int i = inicio; i <= fim; i++)
    {
        printf("%c", frase[i]);
    }
}

int main()
{
    char frase[] = "babad";
    maiorPalindromo(frase);

    return 0;
}