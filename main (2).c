#include <stdio.h>

int main()
{
    int saldo = 2000;
    int valor;
    int notas100, notas50, notas20, notas10, notas5;

    printf("Saldo disponivel: R$ %d\n", saldo);
    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    while (valor > saldo && valor % 5 != 0)
    {
        if (valor > saldo)
        {
            printf("Saldo indisponivel\n");
        }
        else if (valor % 5 != 0)
        {
            printf("O valor deve ser multiplo de 5\n");
        }
            printf("digite outro valor: R$");
            scanf("%d", &valor);
    }

    notas100 = valor / 100;
    valor = valor % 100;
    printf("\n notas de 100: %d", notas100);

    notas50 = valor / 50;
    valor = valor % 50;
    printf("\n notas de 50: %d", notas50);

    notas20 = valor / 20;
    valor = valor % 20;
    printf("\n notas de 20: %d", notas20);

    notas10 = valor / 10;
    valor = valor % 10;
    printf("\n notas de 10: %d", notas10);

    notas5 = valor / 5;
    valor = valor % 5;
    printf("\n notas de 5: %d\n", notas5);

    return 0;
}
