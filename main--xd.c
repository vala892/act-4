#include <stdio.h>

void capturar_enteros(){
    int enteros[5];
    float promedio;
    int suma = 0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }
    printf("suma: %i\n", suma),
    printf("promedio: %f\n", suma/5.0;
    
}

void mostar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }
    
}
int main() {
    char op;
    char cadena[20];
    int n;

do
{
    printf("1) capturar enteros\n");
    printf("2) mostrar cadena n veces\n");
    printf("3) agrega personaje\n");
    printf("0) salir");
    scanf("%c", &op);

    switch (op)
    {
    case '1':
        capturar_enteros();
        break;
    case '2':
        printf("escribe una cadena de hasta 20 caracteres");
        fflush(stdin);
        fgets(cadena, sizeof(cadena), stdin);
        printf("n: ");
        scanf("%i", &n);
        mostrar(n, cadena);
        break;
    case '3':
        break;
    default:
        break;
    }

    fflush(stdin);
}while (op != '0');

return 0;
}