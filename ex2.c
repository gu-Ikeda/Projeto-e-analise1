#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char sequencia[20];
    char numeros[20];
    char lista_final[20];
    int cont_num = 0;
    int convertido = 0;
    int op = 0;
    int aux = 1;
    int soma = 0;
    char letra;
    
    printf("Digite uma sequencia: ");
    scanf("%s",sequencia);
    int tam_seq = strlen(sequencia);
    
    for(int i = 0;i<tam_seq;i++)
    {
        if(sequencia[i] >= 'a' && sequencia[i] <= 'z') 
        {
           letra = sequencia[i]; 
        }
        else if(sequencia[i] == '-' || i == (tam_seq-1))
        {
            if(sequencia[i] != '-' && i == (tam_seq-1))
            {
                numeros[cont_num] = sequencia[i];
                cont_num++;
            }
            int tam_num = strlen(numeros);
            aux = tam_num;
            for(int j = 0;j<tam_num;j++)
            {
                convertido = numeros[j] - '0';
                op = convertido*(pow(10,aux-1));
                soma += op;
                aux--;
            }
            memset(numeros, 0, sizeof(numeros));
            for(int k = 0;k<soma;k++)
            {
                lista_final[k] = letra;
            }
            printf("%s",lista_final);
            memset(lista_final, 0, sizeof(lista_final));
            cont_num = 0;
            soma = 0;
        }
        else
        {
            numeros[cont_num] = sequencia[i];
            cont_num++;
        }
    }
    return 0;
}
