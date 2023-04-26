from math import factorial 

e = 2.71828

lambd = float(input('digite as ocorrencias: '))
k = int(input('digite o valor desejado: '))



fat = factorial(k)
p = (e ** (-lambd ) * lambd ** k) / fat

print('\tResultado')
print(f'Resultado: {p}')
print(f'Resultado percent: {p*100:.2f}')
