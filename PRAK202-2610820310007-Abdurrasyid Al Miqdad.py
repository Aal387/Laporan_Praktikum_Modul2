data = []

while len(data) < 6:
    data += input().split()

a, b, i, j, x, y = map(float, data[:6])

hasil = (a - b) * i / j - x - y

print(f"{hasil:.3f}")