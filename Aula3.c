#include <stdio.h>

int main()
{
    int linha, coluna;
    int matriz[2][2];
    
    for(linha= 0; linha < 2; linha++){
        for(coluna= 0; coluna < 2; coluna++){
            printf("Digite os valores da matriz para a linha %d, coluna %d: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    for(linha = 0; linha <=2; linha++){
        for(coluna= 0; coluna < 2; coluna++){
            printf("%d \t", matriz[linha][coluna]);
        }
        printf("Veja a sua matriz");
        printf("\n\n");
    }
    return 0;
}