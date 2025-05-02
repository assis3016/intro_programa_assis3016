@ mod1_np4.py X
mod1_np4.py > ...
from. PIL . import . Image
import numpy as np

def main():
# Carregar a imagem original
img = Image.open("inserir_imagem_no_python.jpg")

# Converter a imagem em dados binarios
img_data = np.array(img)
binary_data = img_data. tobytes()

print("/n", img_data.shape, "/n")

# Salvar os dados binários em um arquivo
with open("original_img.bin", "wb") as file:
file.write(binary_data)