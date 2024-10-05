#include <stdio.h>

int main(void)
{
    int array[] = {8, 7, 4, 9};
    int size = sizeof(array) / sizeof(array[0]);//Pegar o tamanho da array
    int soma = 0;

    for (int i = 0; i < size; i++) soma += array[i]; //Adicionar cada valor em 'soma'

    printf("A media dos numeros da array e: %d", soma / size);//Dividir a soma de todos os numero pela quantidade de numeros e printar
}

