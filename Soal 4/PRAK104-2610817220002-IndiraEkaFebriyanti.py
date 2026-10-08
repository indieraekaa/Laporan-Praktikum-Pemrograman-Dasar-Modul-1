sepatu_A = 400000
sepatu_B = 350000

diskon_A = 13 
diskon_B = 21 

akhir_A = sepatu_A - (sepatu_A * diskon_A // 100)
akhir_B = sepatu_B - (sepatu_B * diskon_B // 100)

print(f"Harga sepatu A adalah {sepatu_A}")
print(f"Harga sepatu B adalah {sepatu_B}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {akhir_A}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {akhir_B}")