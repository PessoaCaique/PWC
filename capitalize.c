#include <stdio.h>
#include <string.h>

void capitalizar(char *frase)
{
    int capitalize = 1; // Controla se a próxima letra deverá ser maiúscula.

    for (int i = 0; frase[i] != '\0'; i++) // Verifica se o caractere atual é diferente do caractere nulo
    {
        if (capitalize && (frase[i] >= 'a' && frase[i] <= 'z')) // Verifica se o capitalize está ativado e se o caractere atual é minúsculo (Verificando se ele está entre a e z na tabela ASCII).
        {
            frase[i] = frase[i] - 'a' + 'A'; // Convertemos o caractere para maiúsculo.
            capitalize = 0;
        }

        else if (frase[i] == '.' || frase[i] == '!' || frase[i] == '?')
        {
            capitalize = 1; // Ativamos a capitalização após um ponto, ponto de exclamação ou ponto de interrogação.
        }
    }
    printf("%s", frase);
}

int main()
{
    char frase[] = "hello. how are you? i'm fine, thank you.";
    capitalizar(frase);

    return 0;
}