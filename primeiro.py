frase = str(input("Digite a sequencia"))
sequencia = list(frase)
alfabeto = ['a','b','c','d']
lista_final = []
int i = 0
int k = 0
in j = 0
int m = 0
chr letra
while i < len(sequencia):
    for k in range len(alfabeto):
        for j in range len(sequencia):
            if sequencia[j] == alfabeto[k]:
                letra = sequencia[j]
                m = j 
                while sequencia[m] != '-':
                    
