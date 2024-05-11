/*#include <stdio.h>
#include <stdlib.h> // biblioteca pentru funcția de generare a numerelor random
#include <time.h> // biblioteca pentru funcția de numărare a timpului de execuție

#define dimensiune 100000 // definim dimensiunea vectorului pe care dorim să îl sortăm cu o lungime de 10 000

void bubbleSort(int x[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (x[j] > x[j + 1]) 
            {
                int aux = x[j];
                x[j] = x[j + 1];
                x[j + 1] = aux;
            }
        }
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
    /*for (int i = 0; i < 10; i++)
    {
        x[i] = i;
    }*/
    /*printf("numere nesortate:\n");
    for (int i = 0; i < 1000; i++) 
    {
        printf("%d. %d\n", i, x[i]);
    }

clock_t start = clock(); // funcție care măsoară timpul de generare a numerelor

bubbleSort(x, dimensiune);

for (int i = 0;i < dimensiune;i++)
{
    printf("%d. %d\n", i, x[i]);
}

clock_t end = clock(); //măsurăm timpul final de execuție
double timp_execuție = ((double)(end - start)) / CLOCKS_PER_SEC; // calculăm timpul final de execuție
printf("Timpul de rulare al codului: %f secunde\n", timp_execuție);
return 0;
}*/