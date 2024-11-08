# Patricia Zaragoza Palma
# Ingenieria en sistemas computacionales

# Solicitar al usuario qué tabla de multiplicar desea ver
tabla = int(input("¿Qué tabla de multiplicar deseas ver? "))

# Imprimir la tabla de multiplicar seleccionada
print(f"\nTabla del {tabla}")
for i in range(1, 11):
    print(f"{tabla} x {i} = {tabla * i}")
