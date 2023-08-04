#include <stdio.h>
#include <stdlib.h>

/*Faça um programa em C que leia um número qualquer digitado pelo
usuário. Se o número lido estiver no intervalo entre 1 e 7 deve ser
exibida uma mensagem de “Valor Válido”, se o número estiver fora do
intervalo deve ser exibida uma mensagem de “Valor Invalido”.*/
/*desenvolvedor: @fischerxp*/

int main()
{
    int numero;
    printf("informe um numero de 1 a 7: \n");
    scanf("%d", &numero);
        if (numero >=1 && numero<=7)
            printf("numero valido");
        else
            printf("Numero invalido");
    return 0;
}
