#include <stdio.h>
int main()
{
    int matrix[4][8], soma[4], aux=0, i,j;

    for(i=0;i<4;i++)
    {
        //comentario
       
        for(j=0;j<8;j++)
        {   printf("linha: %d coluna: %d\n",i,j);
            printf("dgite qualquer numero: ");
            scanf("%d",&matrix[i][j]);
            aux = aux+  matrix[i][j];
        }
        soma[i]= aux;
        aux = 0;
    
    }
    printf("mostrar os elementos das matrizes: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("soma das linhas: \n");

    for(i=0;i<4;i++){
        printf("%d\n",soma[i]);
    }   

}