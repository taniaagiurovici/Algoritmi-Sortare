/*#include <stdio.h>
#include <stdlib.h> // biblioteca pentru funcția de generare a numerelor random
#include <time.h> // biblioteca pentru funcția de numărare a timpului de execuție

#define dimensiune 100



void interclasare(int x[], int s, int m, int d)
{
    int i, j, k;
    int dim_s = m - s + 1;
    int dim_d = d - m;
    int stanga[dimensiune], dreapta[dimensiune];
    for (i = 0; i < dim_s; i++)
    {
        stanga[i] = x[s + i];
    }
    for (j = 0; j < dim_d; j++)
    {
        dreapta[j] = x[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = s;
    while (i < dim_s && j < dim_d)
    {
        if (stanga[i] <= dreapta[j])
        {
            x[k] = stanga[i];
            i++;
        }
        else
        {
            x[k] = dreapta[j];
            j++;
        }
        k++;
    }
    while (i < dim_s)
    {
        x[k] = stanga[i];
        i++;
        k++;
    }
    while (j < dim_d)
    {
        x[k] = dreapta[j];
        j++;
        k++;
    }
}

void sortare(int x[], int s, int d)
{
    if (s < d)
    {
        int m = s + (d - s) / 2;
        sortare(x, s, m);
        sortare(x, m + 1, d);
        interclasare(x, s, m, d);
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
int s = 0;
sortare(x, s, dimensiune - 1);
printf("test 1\n");
for (int i = 0; i < 10;i++)
{
    printf("%d. %d\n", i, x[i]);
}


clock_t end = clock(); //măsurăm timpul final de execuție
double timp_executie = ((double)(end - start)) / CLOCKS_PER_SEC; // calculăm timpul final de execuție
printf("Timpul de rulare al codului: %f secunde\n", timp_executie);
return 0;
} */