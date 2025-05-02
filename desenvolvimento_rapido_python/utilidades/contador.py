def contar_vogais(texto):
    """Conta quantas vogais há no texto."""
    vogais = "aeiouAEIOU"
    return sum(1 for letra in texto if letra in vogais)
