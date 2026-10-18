import random

angka_rahasia = random.randint(1, 100)

print("=== GAME TEBAK ANGKA ===")
print("Saya memilih angka 1 - 100")

while True:
    tebakan = int(input("Masukkan tebakan: "))

    if tebakan < angka_rahasia:
        print("Terlalu kecil!")
    elif tebakan > angka_rahasia:
        print("Terlalu besar!")
    else:
        print("Selamat! Tebakan benar!")
        break
