#include <stdio.h>
#include <math.h>

int main()
{
    char exp[] = {'1','2'};
    char expressao[15];
    double x = 0;
    double op = 0;
    double soma = 0;
    char a = 'a';
    int y = sizeof(exp) / sizeof(exp[0]);
    int z = y-1;
    for(int i = 0;i<y;i++){
        x = exp[i] - '0';
        op = x*(pow(10,z));
        --z;
        soma += op;
    }
    for(int j = 0;j<soma;j++){
        expressao[j] = a;
    }
    for(int k = 0;k<soma;k++){
        char o = expressao[k];
        printf("%c",k);
    }
    return 0;
}
