#include <stdio.h>
#include <string.h>

struct produto
{
    int cod;
    float preco;
    char descr[100];
};

int main(){

    struct produto prod;

    prod.cod = 1;
    prod.preco = 15.56;
    strcpy(prod.descr, "limão");

    printf("%d - %.2f - %s \n", prod.cod, prod.preco, prod.descr);
}