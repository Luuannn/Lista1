#include <stdio.h>

int main (){
    
    int n;

    printf("informe a largura central do losango: ");scanf("%d", &n);

    if (n < 1 || n % 2 == 0){
        printf("insira valor valido\n");
    }
    else{
        for(int i = 1;i <=n;i+=2){
            int e = (n-i)/2;
            for (int j = 0;j < e;j++) 
            {
                printf(" ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("X");
            }
            printf("\n");
        }
        for (int i = n -2; i >= 1;i-=2){
             int e = (n-i)/2;
             for (int j = 0;j < e;j++)
             {
                printf(" ");
             }
             for (int j = 0;j < i;j++)
             {
                printf("X");
             }
             printf("\n");
        }
    }
    return 0;
}