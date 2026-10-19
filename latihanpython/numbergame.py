import random

angka_rahasia = random.randint(1, 100)

print("=== GAME TEBAK ANGKA ===")
print("Saya memilih angka 1 - 100")

while True:
    tebakan = int(input("Masukan tebakan: "))
    if tebakan < 0 or tebakan > 100:
        print("Angka Tidak Valid!")
	continue

    if tebakan < angka_rahasia:
        print("Terlalu kecil!")
    elif tebakan > angka_rahasia:
        print("Terlalu besar!")
    else:
        print("Selamat! Tebakan benar!")
        break
