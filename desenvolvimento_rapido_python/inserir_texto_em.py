def main():
    print("Digite suas frases. Digite 'sair' para terminar e salvar o arquivo.")
    frases = []
    try:
        while True:
            entrada = input("> ")
            if entrada.lower() == "sair":
                break
            frases.append(entrada)
    except KeyboardInterrupt:
        print("\nEntrada interrompida pelo usuário. Salvando dados parciais...")

    # Salva o arquivo original
    with open("meu_arquivo.txt", "w") as arquivo:
        for frase in frases:
            arquivo.write(frase + "\n")

    print("Arquivo original criado. Agora vamos manipular os dados.")

    # Lê o arquivo e cria o modificado
    dados_modificados = []
    with open("meu_arquivo.txt", "r") as arquivo:
        for linha in arquivo:
            dados_modificados.append(linha.strip().upper())

    with open("meu_arquivo_modificado.txt", "w") as arquivo:
        for linha in dados_modificados:
            arquivo.write(linha + "\n")

    print("Arquivo 'meu_arquivo_modificado.txt' criado com sucesso!")


if __name__ == "__main__":
    main()