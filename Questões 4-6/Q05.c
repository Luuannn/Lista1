#include <stdio.h>

int main (){

    int x,n;
    printf ("insira a altura do triangulo:  ");scanf("%d", &x);
    printf ("Insira se o quadrado sera preenchido(1) ou vazado(2): ");scanf("%d", &n);

if (n == 1)
{
    for (int i = 0;i < x;i++)
    {
        for (int j = 0;j < x;j++)
        {
             if (i >= j)
             {
                printf("* ");
             }
        }
        printf("\n");
    }
}
if (n == 2)
{
    for (int i = 0;i < x;i++ )
    {
         for (int j = 0;j < x;j++)
         {
            if (j == 0 || i == x - 1|| i == j)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
         }
            printf("\n");
    }
    
}
    
    return 0;
}