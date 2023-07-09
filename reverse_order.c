#include <stdio.h>
#include <string.h>

void reverteOrdem(char *frase)
{
    int tamanho = strlen(frase); // Ler o tamanho da frase

    char palavras[50][50];
    int contagemPalavras = 0, tamanhoPalavra = 0; /* contagemPalavras conta a quantidade de palavras na frase, tamanhoPalavra é utilizada para sabermos o tamanho de cada palavra,
    sendo incrementada toda vez que um caractere é lido, quando o próximo caractere for o caractere nulo, o tamanhoPalavra é resetado para 0, indicando o final da palavra atual. */
    // Adicionando as palavras no array palavras
    for (int i = 0; i <= tamanho; i++)
    {
        if (frase[i] == ' ' || frase[i] == '\0')
        {
            palavras[contagemPalavras][tamanhoPalavra] = '\0';
            contagemPalavras++;
            tamanhoPalavra = 0;
        }
        else
        {
            palavras[contagemPalavras][tamanhoPalavra] = frase[i];
            tamanhoPalavra++;
        }
    }

    // Imprimindo na ordem inversa
    for (int i = contagemPalavras - 1; i >= 0; i--)
    {
        printf("%s ", palavras[i]);
    }
}

int main()
{
    char input[] = "Hello, World! OpenAI is amazing.";

    reverteOrdem(input);
    return 0;
}