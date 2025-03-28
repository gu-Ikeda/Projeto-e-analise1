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
        if(sequencia[i] >= 'a' && sequencia[i] <= 'z') //Avalia e armazena o char que deve ser repetido
        {
           letra = sequencia[i]; 
        }
        else if(sequencia[i] == '-' || i == (tam_seq-1)) //Ao encontrar um '-' o programa inicia a fase da repetição da letra
        {
            if(sequencia[i] != '-' && i == (tam_seq-1)) //Quando chegar no final da sequencia, o programa armazena o numero final da repeticao, ja que no final n]ao possui um '-'
            {
                numeros[cont_num] = sequencia[i];
                cont_num++;
            }
            int tam_num = strlen(numeros);
            aux = tam_num;
            for(int j = 0;j<tam_num;j++) //Converte os numeros de char para inteiros
            {
                convertido = numeros[j] - '0';
                op = convertido*(pow(10,aux-1));
                soma += op;
                aux--;
            }
            memset(numeros, 0, sizeof(numeros)); //Reseta o array numeros para armazenar o proximo numero da repetição
            for(int k = 0;k<soma;k++) //Armazena a repetição da letra 
            {
                lista_final[k] = letra;
            }
            printf("%s",lista_final); //Imprimi as sequencias de repetições
            memset(lista_final, 0, sizeof(lista_final)); //Reseta o array da sequencia para armazenar a proxima repetição
            cont_num = 0; //Reseta o indice dos numeros no array numeros
            soma = 0; //Reseta a soma para uma nova conversão
        }
        else //Armazena os numeros da repetição
        {
            numeros[cont_num] = sequencia[i];
            cont_num++;
        }
    }
    return 0;
}
