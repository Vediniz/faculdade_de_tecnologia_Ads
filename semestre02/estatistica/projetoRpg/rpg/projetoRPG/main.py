import dados as d20
import os
import img 
probabilidade = 0
azul = '\033[36m'
rosa = '\033[35m'
limpo = '\033[m'

print(
    '\n\nEm um mundo corrompido pela energia maligna, você se encontra dentro da organização que prometeu exterminar estes seres malignos.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nEssa organização enfrenta “inimigos” um tanto quanto peculiares que aflige a todos.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nEm mais um dia totalmente aleatório mas completamente motivado, você está indo falar com o comandante sobre a missão anterior que resultou em um grimório misterioso.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

img.ascii01()
print(f'{rosa}(Imagem da professora){limpo}')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nProfessora - Bom dia Comandante Mazieri! '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nComandante Mazieri - Bom dia? Seu relatório da missão de ontem ainda não chegou à minha mesa, posso saber o por que?'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nProfessora - Não consegui participar do combate, quando cheguei ao local, o capitão já havia exterminado todos os espectros alí.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nMas este grimório estava em um dos corpos que, segundo ele, foi o mais difícil de enfrentar.'
)
input(f'{azul}\nEnter...{limpo}')
os.system('clear')

img.ascii02()
print(f'{rosa}(Professora entrega grimório ao comandante){limpo}')
input(f'{azul}\nEnter...{limpo}')
os.system('clear')

img.ascii03()
print(f'{rosa}(A cor dos olhos do comandante mudam){limpo}')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

img.ascii04()
print(
    f'\n\n{rosa}(e o grimório explode sem deixar vestígios){limpo}'
)
input(f'{azul}\nEnter...{limpo}')
os.system('clear')

print('\n\nProfessora -  MAS O QUE?!')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(f'\n\nComandante - {rosa}[sussurro]{limpo} pior seria se…')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nComandante - Não sei, mas… não temos tempo a perder, você já tem uma nova missão sob os comandos do mesmo capitão.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(f'\n\nProfessora - Mas.. . {rosa}[um “mas” desconfiado pelo sussurro]{limpo}')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nComandante - Vocês terão de ir às ruínas da Fatec . Os estudantes dela, estão enlouquecendo, ficando em um estado deplorável usando dialetos aparentemente sem sentido.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nSeu capitão já partiu , você deve ir imediatamente!')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

img.ascii05()
print(f'{rosa}(Comandante fecha a porta com força){limpo}')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    f'{rosa}\n\nA professora está dentro da carroça , som irritante ao fundo “tum tcha tcha, tugu tcha”'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

probExito = (8 / 20) * 100
probFalha = (12 / 20) * 100

print(
    f'\n\nVocê sente uma presença maligna e olha arredores -- {rosa}(Aperte ENTER para rolar o dado de 20 lados, você precisa de um número maior que 12 para passar neste teste){limpo}'
)
print(
    '----------------------------------------------------------------------------------'
)
print(f'\n{rosa}Probabilidade de cair um número maior que 12: {probExito}%%')
print(f'\nProbabilidade de cair um número menor ou igual a 12: {probFalha}%%{limpo}')
input(f'\n{azul}Enter para jogar o dado...{limpo}')
print('\n')

n = d20.rolagemD20()

if (n > 12):
    print('...Você acertou!')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê nota que a presença maligna emana do condutor da carroça.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    img.ascii06()
    print(f'{rosa}(Olhar sério, sobrancelhas baixas){limpo}')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    probExito = (4 / 20) * 100
    probFalha = (16 / 20) * 100

    img.ascii07()
    print(f'{rosa}(Desembainhando a espada){limpo}')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')
    print(f'\n{rosa}Você está em combate -- (Aperte ENTER para rolar o dado de 20 lados, você precisa de um número maior que 16 para passar neste teste){limpo}')
    
    print(
        '------------------------------------------------------------------------------'
    )
    print(f'\n{rosa}Probabilidade de cair um número maior que 16: {probExito}%%')
    print(f'\nProbabilidade de cair um número menor ou igual a 16: {probFalha}%%{limpo}')
    input('\nEnter para jogar o dado...')
    print('\n')

    n = d20.rolagemD20()
    
    if (n > 16):
        print('...Você acertou!')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

        print(
            '\n\nVocê atinge o golpe em cheio nas costas do condutor Luiz.'
        )
        img.ascii08()
        print(f'{rosa}(Morte do luiz, cena espadada nas costas){limpo}')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

        print(
            f'\n\nVocê toma as rédeas da carroça, e continua ao seu destino.)'
        )
        img.ascii09()
        print(f'{rosa}(FATEC){limpo}')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')
        print(f'\n (Musica ao fundo “Roça, roça, roça o p …..  que ela gosta”')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

    else:
        print('...Você errou! Seu número não é maior que 16\n')

        img.asciiEspada()
        print(f'{rosa}(Errando a espadada){limpo}')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

        print(
            f'\n\nVocê errou o golpe, o condutor fugiu em direção ao som deletério.'
        )
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

        img.ascii09()
        print(f'\n{rosa}(FATEC){limpo}')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')
        
        print(
            f'\n\n{rosa} (Musica ao fundo “Roça, roça, roça o p …..  que ela gosta”{limpo})\n'
        )
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

else:
    print('...Você errou! Seu número não é maior que 12\n')
    print(
        '\n\nVocê não consegue entender de onde está vindo esta sensação. A carroça passa em um buraco o condutor esbarra em você aproveitando sua falta de foco e rouba seu dinheiro.'
    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

print(
    f'\n\nVocê chega na fatec... \nProfessora - Nossa … que lugar incrível! {rosa}[ironia]{limpo}'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVocê se aproxima das ruínas, e logo nota seu capitão interagindo com um Espectro de energia maligna que não parece estar conectado a ninguém.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    f'\n\nVocê se aproxima do capitão'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

probExito = (5 / 20) * 100
probFalha = (15 / 20) * 100

print(
    f'\n\nVocê tenta descobrir o que está havendo --{rosa} ( Aperte ENTER para rolar o dado de 20 lados, você precisa de um número maior que 15 para passar neste teste.{limpo})' 
)
print(
        '------------------------------------------------------------------------------'
    )
print(f'\n{rosa}Probabilidade de cair um número maior que 15: {probExito}%%')
print(f'\nProbabilidade de cair um número menor ou igual a 15:  {probFalha}%%{limpo}')
input(f'\n{azul}Enter para jogar o dado...{limpo}')
print('\n')

n = d20.rolagemD20()

if (n > 15):
    print('...Você acertou!')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print(
    '\n\nVocê percebe a traição do capitão, ele está fingindo lutar com o Espectro, logo você não se aproxima. '
    )
    print(
    '\n\nCapitão Jeferson - Eu sei que está aí … até quando vai ficar parada ao invés de me ajudar??' 
    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print(
    '\n\nProfessora - O que está acontecendo capitão?'
    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print(
    '\n\nCapitão Jeferson - vou fazer o que eu deveria ter feito faz tempo… acabar com essa coisa toda!!'
    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print(
    '\n\nProfessora - O que? Como assim?'
    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print(
    '\n\nCapitão Jeferson - Calma … tudo vai acabar num piscar de olhos… nada vai ter acontecido. Nada disso é real, então nada importa. Eu vou acabar com tudo, toda essa tortura.'
    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print(
    f'\n\n{rosa}(Som rajado muito alto ao fundo “tum tcha tcha, tugu tcha”){limpo}'

    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

else:
    print('...Você errou! Seu número não é maior que 15\n')
    print(
          '\n\nVocê se aproxima do capitão que aparentemente está lutando com aquele espectro enorme para ajudá-lo ao chegar próximo a ele…. o capitão desfere um golpe em você a atingindo na perna. '
        )
    input(f'{azul}\nEnter...{limpo}')
    os.system('clear')

    print(
    f'\n\n{rosa}(Som rajado muito alto ao fundo “tum tcha tcha, tugu tcha”){limpo}'
    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')


img.ascii10()
print(
    f'{rosa}(Capitão com o Espectro atrás dele){limpo}'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nCapitão Jeferson -  Mas pra isso eu preciso de VOCÊ.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nCapitão Jeferson - Agora fique quietinha… Preciso do seu coração.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVocê ouve passos e nota o tenente Ryan chegando pela entrada do local.'
)
print(
    '\nRyan - Capitão ta metendo o loco?? que fita é essa??! AAAhhh, esse som infernal está me contaminando … desculpe meu modo estranho de falar … Capitão o que está acontecendo aqui??'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nCapitão Jeferson exprime um rosto de ódio ao notar que o tenente Ryan aponta um de seus revólveres para ele.'
)
print(
    '\nO espectro toma a frente como se defendesse o Capitão, enquanto ele se distancia.'
)
print(
    '\nO Espectro envolve o capitão e o capitão foge'
)
print(
    '\nRyan se aproxima de você e nota a ferida em sua perna.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nRyan - Que diabos aconteceu com sua perna?? Me desculpa … quero dizer … o que ouve com sua perna?? '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nEle começa a tentar fazer os primeiros socorros.'
)
print(
    f'\nProfessora - Isso foi um golpe, do Capitão… “Sê acredita?” é … até eu estou sofrendo os efeitos desse barulho. {rosa}(desmaio){limpo}.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nRyan - Você precisa ir até a Veruska, isso provavelmente vai se espalhar pelo seu corpo.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nRyan - só vamos rápido antes que esse som domine nossas mentes…'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')
print(
    f'\n\n{rosa}(som ao fundo “Ela me falou que quer rave, bebida, quer bala pra ficar na brisa, na brisa”){limpo}'
)
print(
    '\nRyan te leva até Veruska a cavalo.'
)
print(
    '\n\n Ryan chega batendo na porta com tudo'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nRyan - VERUSKA??!'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - Oi oi.. o que foi?? '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nRyan - Ajuda aqui Pô! '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - Meu Deus!!'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska produz uma poção e derruba em seu machucado '
)
print(
    '\nVocê finalmente acorda. '
)
img.ascii11()
print(
    f'{rosa}(Veruska em frente a professora){limpo}'
)
input(f'{azul}\nEnter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - Olá… está se sentindo bem?'
)
input(f'{azul}\nEnter...{limpo}')
os.system('clear')

print(
    '\n\nProfessora - Acho que Sim.. sem dor pelo menos.'
)
input(f'{azul}\nEnter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - Ótimo, fique deitada mais um pouco, a dor irá voltar caso você não tome regularmente o antídoto, pelo menos por enquanto.'
)
input(f'{azul}\nEnter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska -  Use isso também … vai minimizar os efeitos de um possível controle mental vindo desse barulho terrível.'
)
input(f'{azul}\nEnter...{limpo}')
os.system('clear')

print(
    f'\n\nEntrega algo para os ouvidos'
)
print(
    '\n\nProfessora - Quem é você??...'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - Eu sou a alquimista que cuida de vocês… da organização das sombras, prazer meu nome é Veruska. '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nProfessora - Ah o Ryan tinha dito algo sobre me trazer para cá, minha memória está falha… onde ele está? '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - Bom, ele saiu para patrulhar o local, disse que o capitão poderia estar por aqui ainda. '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nProfessora - O capitão me atacou, e eu tenho certeza que vou me encontrar com ele de novo. '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

img.ascii12()
print(
    '(Homem encapuzado entrando no local)'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\nProfessora - O comandante me enviou para cá, mas eu não entendi muito bem.. qual era o...'
)
print(
    '\nVocê é interrompida por uma voz masculina e tiros.\nVeruska sai correndo para fora.'
)
print(
    f'\n{rosa}(som ao fundo ”Escravos do pó, cheiravam sem parar\nFumam, cheiram, cheiram até pancar\nChincheiros com chincheiros ficam doido pra danar”){limpo}'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska para em frente a porta com uma expressão horrorizada. Ela segura e traz o corpo do Ryan que parece ter sangrado bastante já.'
)
print(
    '\nVeruska coloca o Ryan em uma maca'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska entrega um bilhete manchado de sangue para você.'
)
print(
    '\nVocê abre o folheto de papel'
)
print(
    '\nEscrita na carta -- “Isso é um aviso. Cada pessoa que você mandar para tentar me parar, vai morrer! Se entregue logo para colocarmos um fim nisso tudo. Me encontre dentro das ruínas. eu estou com um de seus gatinhos apareça com mais alguém e ele morre” '
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nProfessora - Mas que filho da … Que merda está acontecendo??'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - Eu li a carta.. ele realmente enlouqueceu.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nProfessora - Eu tenho que ir.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - Espere'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska te entrega um frasco misterioso.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVeruska - De todos os químicos que eu usava para tratar as feridas dele, este composto ele nunca me deixou usar, sei que deve afetá-lo de alguma  forma, leve com você e faça bom uso.'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nO homem remove o capuz.\nO homem encapuzado revela ser o Comandante que parece um tanto quanto constrangido.\nComandante - O tenente Ryan...'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nVocê parte para as ruínas\n\nComandante - Estes golpes são do capitão?'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print(
    '\n\nProfessora - Comandante…'
)
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

probExito = (8 / 20) * 100
probFalha = (12 / 20) * 100

print(
    f'\n\nVocê irá falar com o comandante e tentará convencê-lo -- {rosa} ( Aperte ENTER para rolar o dado de 20 lados, você precisa de um número maior que 12 para passar neste teste.{limpo})' 
)
print(
        '------------------------------------------------------------------------------'
    )
print(f'\n{rosa}Probabilidade de cair um número maior que 12: {probExito}%%')
print(f'\nProbabilidade de cair um número menor ou igual a 12: {probFalha}%%{limpo}')
input(f'\n{azul}Enter para jogar o dado...{limpo}')
print('\n')

n = d20.rolagemD20()

if (n > 12):
    print('...Você acertou!')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nProfessora - Eu vou atrás do capitão… ele que fez isso, você o conhece melhor que eu.. como eu posso acabar com isso?')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nO Comandante silenciosamente oferece o machado para suas mãos.\n')

    img.ascii13()
    print(f'{rosa}(Dando o machado){limpo}')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print(f'\n\nComandante - Use-o, é a única coisa que posso oferecer… minha mente foi invadida não era para você estar aqui… ele me fez te falar para você vir nessa missão…')

    print('\n\nProfessora - Isso explica um pouco melhor as coisas…')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê logo se apronta para ir às ruínas, e na mente a cena do Ryan machucado deitado no chão.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nProfessora - Não vou deixar com que ele faça isso com mais ninguém.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\n(som ao fundo “Por isso que eu canto a história do meu gato, Ele faz miau, Ele faz miau, Por que meu gato, Ele faz miau ôh, Ele faz miau”)')
    print('\n\nVocê finalmente toma coragem para ir até as ruínas e quando olha para trás, você nota Veruska e Comandante Mazieri olhando para você enquanto caminha. Ao trocar olhares com o Comandante ele faz um sinal de  “sim” com a cabeça.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVeruska e Mazieri observam ao longe ')
    print('\n\nAo chegar nas ruínas você se depara com aquele repugnante espectro de braços longos e um rosto com um sorriso sádico.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    img.ascii14()
    input(f'{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nDe trás do espectro aparece o Jeferson, caminhando em sua direção.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nCapitão Jeferson - Me deixe acabar com tudo isso, você é a fonte do poder que eu preciso.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nProfessora - Não há uma forma de acabar com tudo isso, tudo que você está pensando é influência desse bicho horroroso que cerca  você. De todas as pessoas…. eu achava que você nunca seria controlado por um espectro, mas eu me enganei.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nCapitão Jeferson - APENAS MORRA!!')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nCapitão estala os dedos para o objeto que emite o som maligno e o volume aumenta consideravelmente ... ')
    print('\n\n(som próximo e estridente “Funk de corredor” )')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nCapitão Jeferson corre furiosamente em sua direção segurando uma espada longa preparando seu ataque.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê se esquiva deste ataque.')
    print('\n\nE o consegue contra-atacar com sucesso.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê vê o espectro se aproximar e cobrir o local com a mão onde está sangrando com o golpe recente, quando a criatura horrenda retira a mão, o ferimento desapareceu.')
    print('\n\nO ferimento some)')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê lembra da poção que a veruska te entregou. Você arremessa e o frasco quebra em cima dele. ')
    print('\n\nCapitão Jeferson parece cheirar o líquido.')
    print('\n\nCapitão Jeferson - MERDA! ')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nEm um ataque desesperado, ele vai para cima de você')
    #print('\n\n=== NARRAÇÃO CASO POSSUA O MACHADO ===')
    print('\n\nVocê puxa o machado que foi confiado em suas mãos. ')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    img.ascii13()
    print(f'{rosa}(Puxando o machado) {limpo}')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nE desfere um golpe certeiro no capitão.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear') 

    img.ascii16()
    print(f'{rosa}(Golpe){limpo}')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear') 

else:
    print('...Você errou! Seu número não é maior que 12\n')
    print(
        '\n\nProfessora - Eu irei atrás do capitão… mas ... preciso de ajuda, por favor me ajude!!'
    )
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')
    
    print('\n\nComandante - Você quer mesmo que eu vá?! Ele ameaçou matar um de seus preciosos gatos… eles são suas únicas lembranças não são?')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê fica quieta perante tal fala.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nComandante - Você precisa lidar com isso sozinha, você consegue. Não te escalei para aquelas missões difíceis atoa, você irá voltar aqui e irá ter ganho.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\n(som ao fundo “Por isso que eu canto a história do meu gato, Ele faz miau, Ele faz miau, Por que meu gato, Ele faz miau ôh, Ele faz miau”)')
    print('\n\nVocê finalmente toma coragem para ir até as ruínas e quando olha para trás, você nota Veruska e Comandante Mazieri olhando para você enquanto caminha. Ao trocar olhares com o Comandante ele faz um sinal de  “sim” com a cabeça.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVeruska e Mazieri observam ao longe ')
    print('\n\nAo chegar nas ruínas você se depara com aquele repugnante espectro de braços longos e um rosto com um sorriso sádico.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    img.ascii14()
    print(f'{rosa}Imagem descrita do espectro{limpo}')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nDe trás do espectro aparece o Jeferson, caminhando em sua direção.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nCapitão Jeferson - Me deixe acabar com tudo isso, você é a fonte do poder que eu preciso.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nProfessora - Não há uma forma de acabar com tudo isso, tudo que você está pensando é influência desse bicho horroroso que cerca  você. De todas as pessoas…. eu achava que você nunca seria controlado por um espectro, mas eu me enganei.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nCapitão Jeferson - APENAS MORRA!!')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nCapitão estala os dedos para o objeto que emite o som maligno e o volume aumenta consideravelmente ... ')
    print('\n\n(som próximo e estridente “Funk de corredor” )')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nCapitão Jeferson corre furiosamente em sua direção segurando uma espada longa preparando seu ataque.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê se esquiva deste ataque.')
    print('\n\nE o consegue contra-atacar com sucesso.')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê vê o espectro se aproximar e cobrir o local com a mão onde está sangrando com o golpe recente, quando a criatura horrenda retira a mão, o ferimento desapareceu.')
    print('\n\nO ferimento some')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nVocê lembra da poção que a veruska te entregou. Você arremessa e o frasco quebra em cima dele. ')
    print('\n\nCapitão Jeferson parece cheirar o líquido.')
    print('\n\nCapitão Jeferson - MERDA! ')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    print('\n\nEm um ataque desesperado, ele vai para cima de você')
    print('\n\n')
    input(f'\n{azul}Enter...{limpo}')
    os.system('clear')

    probExito = (10 / 20) * 100
    probFalha = (10 / 20) * 100

    #print('\n\n=== NARRAÇÃO SEM MACHADO ===')
    print('\n\nNeste ataque desesperado, você nota uma chance de atingi-lo.')
    print(
    f'\n\nVocê irá atacá-lo  -- {rosa} ( Aperte ENTER para rolar o dado de 20 lados, você precisa de um número maior que 10 para passar neste teste.{limpo})' 
    )
    print(
            '------------------------------------------------------------------------------'
        )
    print(f'\n{rosa}Probabilidade de cair um número maior que 10: {probExito}%%')
    print(f'\nProbabilidade de cair um número menor ou igual a 10:  {probFalha}%%{limpo}')
    input(f'\n{azul}Enter para jogar o dado...{limpo}')
    print('\n')
    
    n = d20.rolagemD20()
    
    if (n > 10):
        print('...Você acertou!')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

        print('\n\nVocê o ataca com sua espada na abertura criada pelo seu ataque desesperado. O  golpe o  atingiu em cheio no peito. ')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

        img.asciiEspada()
        print(f'{rosa}(Golpe final ){limpo}')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

    else:
        print('\n\n...Você errou! Seu número não é maior que 10\n)')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')
        
        print('\n\nVocê posiciona sua espada para frente na tentativa de um golpe e fecha seus olhos achando que irá ser atingida. ')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

        print('\n\nQuando você abre seus olhos. ')
        

        img.ascii18()
        print('(Espada perfurando o peito do capitão) ')
        input(f'\n{azul}Enter...{limpo}')
        os.system('clear')

print('\n\nSom sessa, caixinha de som perde o encantamento')
print('\n\nEm seus últimos momentos de vida.')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nCapitão Jeferson - Obrigado, por me libeer… ')
print('\n\nCapitão Jeferson cai na sua frente.')
print('\n\nDe todas as vezes que você enfrentou espectros, ele possuíam um cordão que o ligava a seus portadores, e ao matar seu portador o espectro desaparece. ')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

img.ascii19()
print(f'{rosa}(Criatura observando a professora) {limpo}')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nEle te observa…')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

img.ascii20()
print(f'{rosa}(Criatura abrindo um sorriso){limpo} ')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nEle sorri…')
print('\n\nA criatura vira de costas e vai em direção a mata')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nEle voltará…')
print('\n\nPensando sobre esta cena que acabara de viver. Você se lembra.')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nProfessora - Eu me lembro… ')
print('\n\nVocê possui 15 anos de sua vida no qual, é simplesmente uma lacuna. E agora suas lembranças fluem para você. ')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nO Capitão Jeferson, foi quem te inseriu na organização a 5 anos atrás. Você estava triste e se sentia perdida, inúmeras missões foram realizadas ao lado de seu esquadrão do qual os rostos permanecem escuros.')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

img.ascii21()
print(f'{rosa}(Imagem do esquadrão{limpo}')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nVocê se recorda de uma foto que o Capitão levava consigo do primeiro dia que você esteve na organização. ')
print('\n\nVocê acha a foto em um de seus bolsos.')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nAo olhar novamente, é uma foto que traz felicidade e seu coração se aquece um pouco. ')
print('\n\nPorém ao olhar com mais atenção, você nota que sua sombra está incoerente à luz da cena, e vê uma linha que leva a um pequeno ser. ')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nCom o mesmo sorriso que você viu a alguns segundos atrás.')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

img.ascii21()
print(f'{rosa}(Fotografia){limpo}')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nFim?')
input(f'\n{azul}Enter...{limpo}')
os.system('clear')

print('\n\nGrupo: Luiz, Jeferson, Ryan, Gabriel, Veruska. ')
print('\n\nMensagem final: Se nos der 10, fazemos a continuação em!!! :D Obrigado por ler até o final! ')