#include <stdio.h>

int main (){

    int B, L, A;

        for (int i = 0;i < 1;i++)
    {
        printf("Digite o valor da base da arvore (B): ");scanf("%d", &B);
            if (B < 3 || B % 2 == 0)
        {
            printf("\nERRO, Insira valor valido\n\n");
            i--;
        }
    }

        for (int i = 0;i < 1;i++)
    {
        printf("Digite o valor da largura do tronco(L): ");scanf("%d", &L);
            if (L < 1 || L % 2 == 0 || L > B/2)
        {
            printf("\nERRO, Insira valor valido\n\n");
            i--;
        }
    }

        for (int i = 0;i < 1;i++)
    {
        printf("Digite o valor da altura do tronco(A): ");scanf("%d", &A);
            if (A < 2 || A > B/2)
        {
            printf("\nERRO, Insira valor valido\n\n");
            i--;
        }
    }



    for (int i = 1;i <= B;i+=2)
    {
        int e = (B - i)/2;
        for (int j = 0; j < e;j++)
        {
            printf("  ");
        }
        for (int j = 0;j < i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    int e = (B - L)/2;

    for (int i = 0; i < A;i++)
    {
        for (int j = 0;j < e;j++)
        {
            printf("  ");
        }
        for (int j = 0;j < L;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}