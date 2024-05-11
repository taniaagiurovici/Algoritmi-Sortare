/*#include <stdio.h>
#include <stdlib.h> // biblioteca pentru funcția de generare a numerelor random
#include <time.h> // biblioteca pentru funcția de numărare a timpului de execuție

#define dimensiune 10000

void selectionSort(int x[], int n) 
{
    int i, j, indice_minim;
    for (i = 0; i < n - 1; i++) 
    {
        indice_minim = i;
        for (j = i + 1; j < n; j++) 
        {
            if (x[j] < x[indice_minim]) 
            {
                indice_minim= j;
            }
        }
        int aux = x[indice_minim];
        x[indice_minim] = x[i];
        x[i] = aux;
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
    for (int i = 0; i < 10; i++)
    {
        x[i] = i;
    }
    /*printf("numere nesortate:\n");
   for (int i = 0; i < 1000; i++)
   {
       printf("%d. %d\n", i, x[i]);
   }
clock_t start = clock(); // funcție care măsoară timpul de generare a numerelor
selectionSort(x, dimensiune);

for (int i = 0; i < 10;i++)
{
    printf("%d. %d\n", i, x[i]);
}

clock_t end = clock(); //măsurăm timpul final de execuție
double timp_executie = ((double)(end - start)) / CLOCKS_PER_SEC; // calculăm timpul final de execuție
printf("Timpul de rulare al codului: %f secunde\n", timp_executie);


return 0;
}*/