/*#include <stdio.h>
#include <stdlib.h> // biblioteca pentru funcția de generare a numerelor random
#include <time.h> // biblioteca pentru funcția de numărare a timpului de execuție

#define dimensiune 10000

void swap(int* a, int* b) 
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int partitie(int x[], int s, int d) 
{
    int pivot = x[d];
    int i = (s - 1);
    for (int j = s; j <= d - 1; j++) 
    {
        if (x[j] < pivot) 
        {
            i++;
            swap(&x[i], &x[j]);
        }
    }
    swap(&x[i + 1], &x[d]);
    return (i + 1);
}

void quickSort(int x[], int s, int d) 
{
    if (s < d) 
    {
        int q = partitie(x, s, d);

        quickSort(x, s, q - 1);
        quickSort(x, q + 1, d);
    }
}

int main() 
{
    srand(time(NULL)); // timpul inițial este 0
    int x[dimensiune];
    for (int i = 0; i < dimensiune; i++) //adăugăm numere random în vectorul pe care dorim să îl sortăm
    {
        x[i] = rand();
    }

    clock_t start = clock(); // funcție care măsoară timpul de generare a numerelor
    quickSort(x, 0, dimensiune-1);
  
    for (int i = 0;i < 10;i++)
    {
        printf("%d. %d\n", i, x[i]);
    }
    clock_t end = clock(); //măsurăm timpul final de execuție
    double timp_executie = ((double)(end - start)) / CLOCKS_PER_SEC; // calculăm timpul final de execuție
    printf("Timpul de rulare al codului: %f secunde\n", timp_executie);

    return 0;
}*/