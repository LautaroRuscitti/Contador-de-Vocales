#include <stdio.h>
#include <ctype.h>  

int main() {
    char texto[1000];
    int vocales[5] = {0};  // Arreglo para contar las vocales
    int totalVocales = 0;  // Contador para el total de vocales
    int i;

    printf("Ingrese un texto: ");
    fgets(texto, sizeof(texto), stdin);  // Leer el texto ingresado por el usuario

    // Recorrer cada caracter del texto
    for (i = 0; texto[i] != '\0'; ++i) {
        switch (tolower(texto[i])) {
            case 'a':
                vocales[0]++;
                totalVocales++;
                break;
            case 'e':
                vocales[1]++;
                totalVocales++;
                break;
            case 'i':
                vocales[2]++;
                totalVocales++;
                break;
            case 'o':
                vocales[3]++;
                totalVocales++;
                break;
            case 'u':
                vocales[4]++;
                totalVocales++;
                break;
            default:
                break;
        }
    }

    // Mostrar las vocales
    printf("Numero de vocales:\n");
    printf("A: %d\n", vocales[0]);
    printf("E: %d\n", vocales[1]);
    printf("I: %d\n", vocales[2]);
    printf("O: %d\n", vocales[3]);
    printf("U: %d\n", vocales[4]);

    // Mostrar el total de vocales
    printf("Total de vocales: %d\n", totalVocales);

    return 0;
}
