def contar_vocales(texto):
    texto = texto.lower()
    
    vocales = {'a': 0, 'e': 0, 'i': 0, 'o': 0, 'u': 0}
    total_vocales = 0
    
    for char in texto:
        if char in vocales:
            vocales[char] += 1
            total_vocales += 1
            
    print("Número de vocales:")
    for vocal, conteo in vocales.items():
        print(f"{vocal}: {conteo}")
        
    print(f"Total de vocales: {total_vocales}")

texto = input("Ingrese un texto: ")
contar_vocales(texto)
