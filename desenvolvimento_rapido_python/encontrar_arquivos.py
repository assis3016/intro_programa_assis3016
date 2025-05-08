import os

# Caminho da pasta do usuário
pasta_usuario = "C:/Users/assis"

# Nome do arquivo a ser encontrado
nome_arquivo = "dados.txt"

# Busca recursiva
for raiz, dirs, arquivos in os.walk(pasta_usuario):
    if nome_arquivo in arquivos:
        caminho = os.path.join(raiz, nome_arquivo)
        print(f"Arquivo encontrado: {caminho}")
        break
else:
    print("Arquivo 'dados.txt' não foi encontrado.")
