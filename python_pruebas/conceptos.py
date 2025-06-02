#f syting

print("¿Cómo te llamas?")
nombre = input("> ")  # El "> " actúa como prompt visual
print(f"Hola, {nombre}!")

age = input("¿Cuántos años tienes? ")
age = int(age)  # Convertir la entrada a un número entero
print(f"¡Tienes {age} años!")



# Lista básica
lista = [1, 2, 3, 4, 5]

# Función para imprimir todos los elementos de una lista
def imprimir_lista(lista):
    for elemento in lista:
        print(elemento)

# Imprimir un elemento específico (CORRECCIÓN: Usar paréntesis en print)
print(lista[1])  # Imprime el segundo elemento de la lista (los índices comienzan en 0)

# Lista bidimensional (lista de listas)
lista2 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

# Función para imprimir lista bidimensional
def imprimir_lista2(lista2):
    for sublista in lista2:
        for elemento in sublista:
            print(elemento)

# Acceso a elemento en lista bidimensional
print(lista2[1][2])  # Imprime el tercer elemento de la segunda sublista (el 6)

# Operaciones de slicing (rebanado)
print(lista[1:4])    # Imprime [2, 3, 4] (índices 1 al 3)
print(lista2[0][1:3]) # Imprime [2, 3] (elementos 1-2 de la primera sublista)
print(lista[1:3:2])   # Imprime [2] (de 1 a 2, saltando de 2 en 2)
print(lista[3:0:-1])  # CORRECCIÓN: Imprime [4, 3, 2] (elementos del 3 al 1 en reversa)

# Añadir elementos a una lista
lista += [6, 7, 8]  # Equivalente a lista.extend([6, 7, 8])
print("Lista actualizada:", lista)

# Longitud de la lista
print("Longitud de la lista:", len(lista))  # Ahora será 8