import os

# Abrindo o arquivo no modo escrita
arquivo = open('exemplo.txt', 'w', encoding='utf-8')
# Removido porque não é necessário e causa erro

# Exibindo os atributos do arquivo
print("nome do arquivo:", arquivo.name)
print("nome de abertura:", arquivo.mode)
print("arquivo está fechado?", arquivo.closed)

# Escrevendo no arquivo
arquivo.write("ola, mundo! lorem ipsum dolor sit amet, consectetur adipiscing elit.\n")

# Fechando o arquivo
arquivo.close()

# Verificando se o arquivo está fechado
print("Arquivo está se fechando agora?", arquivo.closed)

# Exibindo caminhos relativos e absolutos
relpath = os.path.relpath('exemplo.txt')
abspath = os.path.abspath('exemplo.txt')

print("caminho relativo:", relpath)
print("caminho absoluto:", abspath)
