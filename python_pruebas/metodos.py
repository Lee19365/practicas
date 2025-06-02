lista =[1, 2, 3, 4, 5]

lista.append(6)  # Añade el elemento 6 al final de la lista

lista.insert(1, 0)  # Inserta el elemento 0 al inicio de la lista

lista.extend([7, 8, 9])  # Añade múltiples elementos al final de la lista

lista.remove(3)  # Elimina el primer elemento con valor 3 de la lista

ultimo = lista.pop()  # Elimina y devuelve el último elemento de la lista
print("Lista modificada:", lista)  # Imprime la lista después de las modificaciones

#eliminar rango 
del lista[1:3]  # Elimina los elementos en los índices 1 y 2 (el 0 y el 1)

lista2 = [5,6,9,1,2,3,7,8,4]

# Ordenar la lista en orden ascendente
lista2.sort()  # Ordena la lista en su lugar

print(lista.count(1))  # Cuenta cuántas veces aparece el número 1 en la lista

print('1'in lista)  # Verifica si el número 1 está en la lista (True o False) 
