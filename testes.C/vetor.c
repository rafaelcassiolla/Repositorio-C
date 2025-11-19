#include <stdio.h>

int main (void) {
    int numeros[10];

    for (int i = 0; i < 100; i+=10)
    {
        numeros[i] = i + 10;
    }

    for (int j = 0; j < 100; j+=10)
    {
        printf("%d \n", numeros[j]);
    }
    
}