#f syting

print("¿Cómo te llamas?")
nombre = input("> ")  # El "> " actúa como prompt visual
print(f"Hola, {nombre}!")

age = input("¿Cuántos años tienes? ")
age = int(age)  # Convertir la entrada a un número entero
print(f"¡Tienes {age} años!")