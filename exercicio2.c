#include <stdio.h>
int main()
{
    float matrix[5][4];
    int count=1;
    float numero;
    for(int i=0;i<5;i++)
    {
        //comentario
        printf("informe as 4 notas do %d o aluno: \n",count++);
        for(int j=0;j<4;j++)
        {
            printf("informe um numero: ");
            scanf("%f",&numero);
            if(numero>=0 && numero<=20)
            {
                matrix[i][j] = numero;
            }
            else
            {
                printf("Nota invalida!!!\n");
                if(j>=1)
                {
                    j--;
                }
            }

        }
    }

    count=1;

    for(int i=0;i<5;i++)
    {
        printf("notas do %do aluno:\n", count++);
        for(int j=0;j<4;j++)
        {
            printf("nota: %.2f \n",matrix[i][j]);
        }
    }
}