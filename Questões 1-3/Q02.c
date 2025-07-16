#include <stdio.h>

int main (){

    int n;
    
    printf("Digite o tamanho da piramide: ");scanf("%d", &n);

    

     if (n >= 2){
    for (int i = 0; i < n; i++)
    {
        
        for(int j = 0; j < n - i - 1;j++){
            printf("  ");
        }
        for(int j = 1; j <= i + 1;j++){
            printf("%d ", j);
        }
        for(int j = i; j >= 1;j--){
            printf("%d ", j);
        }
       printf("\n");
    }
    }
    else{
        printf("insira valor valido\n");
    }


    return 0;
}