filepath = 'cadastro.txt'
file = open(filepath,'a')

file_ofertas = 'Ofertas.txt'
file_o = open(file_ofertas,'a')

file_novidades = 'novidades.txt'
file_n = open(file_novidades,'a')

file_compra = 'compra.txt'
file_c = open(file_compra,'a')

clientearquivo = 'cliente.txt'
cliente = open('Cliente.txt', 'a')


#menu comprar
def comprar():
    print('\n --COMPRAR-- \n')
    print(f'1- Ofertas \n')
    print(f'2- Novidades \n')
    print(f'3- Comprar \n')
    print(f'4- Sair \n')

    opcao_cliente = int(input('Entre com a opção: '))
    def clientes():
        while True:
            print()
            if  opcao_cliente == 4:
                menu()
                break
            elif  opcao_cliente == 1:
                ofertas = open('Ofertas.txt', 'r')
                
                for conteudo in ofertas:
                    print(conteudo.split(';'))

                end = input('Deseja sair? ')
                if end == 'sim':
                    
                    comprar()
            
            elif opcao_cliente == 2:
                novidades = open('novidades.txt', 'r')
                
                for conteudo in novidades:
                    print(conteudo.split(';'))
                

                end = input('Deseja sair? ')
                if end == 'sim':
                    comprar()

            elif opcao_cliente == 3:
                produtos = open('cadastro.txt', 'r')
                

                for conteudo in produtos:
                    print(conteudo.split(';'))

            comprar_produto = str(input('Digite o código do produto: '))
            cliente.write(str(comprar_produto) + ';')
            cliente.write('\n')

            end = input('Deseja sair? ')

            if end == 'sim':
                comprar()
            else:
                print('Opção inválida')
        comprar()
    clientes()

def ultimascompras():
    ultimas_compras = open('cliente.txt','r')

    for conteudo in ultimas_compras:
        print(conteudo.split(';'))

def administrativa():
    print(f'---ADMINISTRAÇÃO---')
    print(f'1- Cadastro \n')
    print(f'2- Produtos Vendidos \n')
    print(f'3- Sair \n')   

    def cadastro():
        print(f'---CADASTRO---')
        print(f'1- Tipo \n')
        print(f'2- Produto \n')
        print(f'3- Ofertas \n') 
        print(f'4- Novidades \n')
        print(f'5- Sair \n')

        opcaocadastro = int(input('Escolha: '))
        
        while opcaocadastro <= 5:
            #Tipo de produtos
            if opcaocadastro == 1:
                print(f'Tipos de Produto: ')
                print(f'1 - Alimentos\n 2 - Congelados \n 3 - Frios \n 4 - Hortifruti \n 5 - Padarias \n  6- Bebidas \n 7 - Higiene \n 8 - Limpeza \n ')
                sair = input('deseja sair?')
                if sair == 'sim': 
                    cadastro()
            #Produtos Vendidos
            elif opcaocadastro == 2:
            #registro no arquivo txt
                tipo = str(input('Insipira o código do tipo de produto: '))
                file.write(str('\n'))
                file.write(str(tipo) + ';')
                codigo = str(input('Entre com o código do produto: '))
                file.write(str(codigo) + ';')
                registro = str(input('Entre com o produto: '))
                file.write(str(registro))
                preco = str(input('Entre com o preço: '))
                file.write(str(preco)+ ';')
            #finalizando registros
                sair = str(input('Deseja Sair?'))
                if(sair == 'sim'):
                    cadastro()
            #Ofertas_Cadastro
            elif opcaocadastro == 3: 
                print('Quais as ofertas?')
                file_o.write(str('\n'))
                ofertastipo = str(input('O Tipo do produto:'))
                file_o.write(str(ofertastipo) + ';')
                ofertascod = str(input('código do produto: '))
                file_o.write(str(ofertascod)+';')
                ofertasproduto = str(input('Produto: '))
                file_o.write(str(ofertasproduto))
                ofertaspreco = str(input('Preço: '))
                file_o.write(str(ofertaspreco)+ ';')
                #finalizando
                sair = str(input('Deseja sair?'))
                if sair == 'sim': 
                    cadastro()
            #Novidades_Cadastro
            elif opcaocadastro == 4: 
                print(f'Novidades')
                file_n.write(str('\n'))
                novidadestipo = str(input('Digite o tipo: '))
                file_n.write(str(novidadestipo) + ';')
                novidadescod = str(input('Código do produto: '))
                file_n.write((novidadescod) + ';')
                novidadesproduto = str(input('Produto: '))
                file_n.write((novidadesproduto) + ';')
                novidadespreco = str(input('Preço: '))
                file_n.write((novidadespreco) + ';')
                sair = str(input('Deseja sair?'))
                if sair == 'sim': 
                    cadastro()
            else: 
                administrativa()
    
    def produtosvendidos():
        def vendidos():
            f = open('cadastro.txt', 'r')
            for conteudo in f:
                print(conteudo, end= '')
        vendidos()
        print()
        print()
        administrativa()
    file.close
        

    def escolha():
        while True:
            a = int(input('Entre com a opção: '))
            print()
            if a == 3:
                menu()
                break
            if a == 1:
                cadastro()
                break
            if a == 2:
                produtosvendidos()
                break
            else:
                print('Opção inválida')

    escolha()

def menu():
    print(f'--MENU--')
    print(f'1- Comprar \n')
    print(f'2- Ultimas compras \n')
    print(f'3- Administração \n')
    print(f'4- Sair \n')
    opcaomenu = 0
    while opcaomenu <= 0:
        opcaomenu = int(input("Entre com a opção: "))
        if opcaomenu > 4: 
            print(f'{opcaomenu} é inválido')
        elif opcaomenu == 1:
            comprar()
        elif opcaomenu == 2: 
            ultimascompras()
        elif opcaomenu == 3:
            administrativa()
        else: 
            print(f"---Obrigado por utilizar nosso sistema!!---")
            exit()

print(f'---Bem vindo ao menu--- \n -*Escolha uma opção*-')
menu()