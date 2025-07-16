#include <stdio.h>
int main(){
  
    int linha;
        
    printf("informe o numero de linhas: ");scanf("%d", &linha);
 
    for (int i = 0; i < linha;i++){
         
        for(int j = 0; j < linha - i - 1;j++){
            printf("  ");
        }

        int valor = 1;
         for (int t = 0;t <= i;t++)
         {
            printf("%4d",valor);


            valor = valor * (i - t)/(t+1);
         }
        printf("\n");
    }

 return 0;   
}
