# Soal Nomor 1 (Hitunglah banyaknya permutasi dari 3 huruf A,B,C)
from itertools import permutations

items = ['A','B','C']

result = list(permutations(items))

total_length = len(result)

print(f"Total Permutasinya: {total_length}")

# Soal Nomor 2 (Tuliskan semua permutasi A, B, C)
from itertools import permutations

items = ['A','B','C']

result = list(permutations(items))

print(f"Hasil Permutasinya: {result}")

# Soal Nomor 3 (Ada berapa cara untuk memilih juara I, II, dan III dari 100 orang yg mengikuti sebuah lomba?)
result = 100 * 99 * 98

print(result)

# Soal Nomor 4 (Ada berapa permutasi dari kata MASSACHUSETTS?)
from itertools import permutations

def factorial(number):
    result = number
    for i in range(1, number):
        result *= i
    return result

words = ['M', 'A', 'S', 'S', 'A', 'C', 'H', 'U', 'S', 'E', 'T', 'T', 'S']

result = int(factorial(len(words)) / (factorial(2) * factorial(4) * factorial(2)))

print(result)

# Soal Nomor 5 (Ada berapa cara untuk memilih 5 pemain dari 10 orang pemain tenis untuk mengikuti lomba?)
from itertools import combinations

items = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

result = list(combinations(items, 5))

total_result = len(result)

print(total_result)

# Soal Nomor 6 (Ada berapa banyak cara untuk membentuk suatu kelompok belajar MatKom jika anggota kelompok 
# tsb terdiri dari 3 mhs jur IF dan 4 mhs jur SI, jika ada 9 mhs IF dan 11 mhs SI?)

from itertools import combinations

informatika = [1, 2, 3, 4, 5, 6, 7, 8, 9]
sistem_informasi = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]

result_informatika = list(combinations(informatika, 3))
result_sistem_informasi = list(combinations(sistem_informasi, 4))

length_informatika = len(result_informatika)
length_sistem_informasi = len(result_sistem_informasi)

result = length_informatika * length_sistem_informasi

print(result)

# Soal Nomor 7 (Daftarlah kombinasi-2 dari tiga huruf A, B, dan C)

from itertools import combinations

items = ['A', 'B', 'C']

result = list(combinations(items, 2))
length_result = len(result)

print(f"Kombinasinya: {result}\nTotal Kombinasi: {length_result}")