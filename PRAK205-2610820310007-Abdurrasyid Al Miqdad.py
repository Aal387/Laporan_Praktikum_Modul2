data = []
while len(data) < 2:
    data += input().split()
A, B = map(float, data[:2])
alas = (B ** 2 - A ** 2) ** 0.5
tinggi = A
keliling = alas + tinggi + B
luas = alas * tinggi / 2
print(f"Alas = {alas:g} cm")
print(f"Tinggi = {tinggi:g} cm")
print(f"Keliling = {keliling:g} cm")
print(f"Luas = {luas:g} cm^2")