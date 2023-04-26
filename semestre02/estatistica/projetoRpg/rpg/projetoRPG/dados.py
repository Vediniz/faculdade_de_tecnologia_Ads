from random import randint #bibioteca que gera um valor aleatorio 
from time import sleep #biblioteca para intervalo 
import sys
import os

def bemVindo():
    azul = '\033[36m'
    limpo = '\033[m' 
    bemVindoTexto = str('                   BEM VINDA CARA AVENTUREIRA!\n\n\n\n\n\n\n                  DESEJAMOS UMA ÓTIMA CAMPAMNHA...\n\n\n\n')
    for i in range(len(bemVindoTexto)):
        print(bemVindoTexto[i], end ="")
        sys.stdout.flush()
        sleep(0.1)
    input(f'\n\n\n\n\n                   Press {azul}Enter{limpo} para começar.')
    os.system('clear')

def textoDado(): 
    rolandoDadoTexto = str('Rolando Dado...')
    for i in range(len(rolandoDadoTexto)):
        print(rolandoDadoTexto[i], end ="")
        sys.stdout.flush()
        sleep(0.1)

def rolagemD20():
    n = randint(1, 20)
    textoDado()
    sleep(1) 
    
    print(f"""

            ⣿⣿⣿⣿⣿⣿⣿⡿⠟⣋⣙⠻⢿⣿⣿⣿⣿⣿⣿⣿ 
            ⣿⣿⣿⣿⠿⢋⣩⣴⣾⣿⣿⣷⣦⣍⡙⠿⣿⣿⣿⣿ 
            ⣿⡟⢉⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⡙⢻⣿ 
            ⣿⡇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿ 
            ⣿⡇⢸⣿⣿⣿⣿⣿ {n} {'⣿' if n < 10 else ''}⣿⣿⣿⣿⣿⡇⢸⣿
            ⣿⡇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿ 
            ⣿⡇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿ 
            ⣿⣧⣈⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⣁⣼⣿ 
            ⣿⣿⣿⣿⣶⣌⣙⠻⢿⣿⣿⡿⠟⢋⣡⣶⣿⣿⣿⣿ 
            ⣿⣿⣿⣿⣿⣿⣿⣷⣦⣉⣉⣴⣶⣿⣿⣿⣿⣿⣿⣿

        """)
    return n
        
