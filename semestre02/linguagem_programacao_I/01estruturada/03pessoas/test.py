homens = maior = altura = media = maior = 0

for c in range(1, 5):
    pessoas = str(input('[f/m]: '))
    altura = float(input('altura: '))

    if pessoas == 'm':
        homens += 1
    elif pessoas == 'f':
        media += altura
    else:
        print('invalido')

    if c == 1:
        maior = altura
    elif altura > maior:
        maior = altura
        maiorPessoa = c

media = media / c
print(f'a homens:  {homens} media {media} maior{maior} é {maiorPessoa}')
