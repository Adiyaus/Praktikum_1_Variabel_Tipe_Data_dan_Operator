jarak = 14

putaran = 5

import math
jari_jari = jarak / (2 * math.pi * putaran)

# Menampilkan informasi
print("Diketahui:")
print("Pak Dengklek mengelilingi taman =", putaran, "Putaran")
print("Jarak tempuh Pak Dengklek =", jarak, "Kilometer")

print("\nJawaban:")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah", round(jari_jari, 2), "Kilometer")
