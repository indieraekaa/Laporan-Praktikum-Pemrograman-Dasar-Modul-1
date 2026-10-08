import math

a = 12
c = 5

b = int(math.sqrt(a**2 + c**2))

K = a + b + c
L = (c * a) // 2

print("Diketahui: ")
print(f"Alas = {c} cm")
print(f"Tinggi = {a} cm\n")

print("Jawab: ")
print(f"Sisi A = {a} cm")
print(f"Sisi B = {b} cm")
print(f"Sisi C = {c} cm")
print(f"Keliling = {K} cm")
print(f"Luas = {L} cm")
