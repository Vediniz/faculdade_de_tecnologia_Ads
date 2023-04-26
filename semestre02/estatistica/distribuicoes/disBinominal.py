import math

n = int(input('Valor fixo [n]: '))
p = float(input('Chance de sucesso [p]: '))
pf = float(input('Chance de falha [1-p]: '))
k = int(input('Valor desejado [k]: '))

#p(x = k) = Cn,p . P^k . (1-p)^n-k

cnN = math.factorial(n) 
cnNK = math.factorial(n - k)
cnK = math.factorial(k)
cn = (cnN) / (cnK * cnNK)

pX = cn * p ** k * pf ** (n - k)

print('\n\t----Resultado----')
print(f'\nP(x): {pX} \nPercente[p(x)]: {pX*100:.2f}%\n')