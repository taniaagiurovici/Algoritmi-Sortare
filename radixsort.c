/*#include <stdio.h>
#include<stdlib.h> // biblioteca pentru funcția de generare a numerelor random
#include<time.h> // biblioteca pentru funcția de numărare a timpului de execuție

#define dimensiune 10

int gasire_maxim(int x[], int n) 
{
    int max = x[0];
    for (int i = 1; i < n; i++) 
    {
        if (x[i] > max) 
        {
            max = x[i];
        }
    }
    return max;
}
void radixSort(int x[], int n) 
{
    int max = gasire_maxim(x, n); 
    for (int exp = 1; max / exp > 0; exp *= 10) 
    {
        int* rez = (int*)malloc(n * sizeof(int));
        int count[10] = { 0 };
        for (int i = 0; i < n; i++) 
        {
            count[(x[i] / exp) % 10]++;
        }
        for (int i = 1; i < 10; i++) 
        {
            count[i] = count[i] + count[i - 1];
        }
        for (int i = n - 1; i >= 0; i--) 
        {
            rez[count[(x[i] / exp) % 10] - 1] = x[i];
            count[(x[i] / exp) % 10]--;
        }
        for (int i = 0; i < n; i++) 
        {
            x[i] = rez[i];
        }
        free(rez);
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
radixSort(x, dimensiune);
printf("test 1\n");

for (int i = 0;i < dimensiune;i++)
{
    printf("%d. %d\n", i, x[i]);
}
clock_t end = clock(); //măsurăm timpul final de execuție
double timp_executie = ((double)(end - start)) / CLOCKS_PER_SEC; // calculăm timpul final de execuție
printf("Timpul de rulare al codului: %f secunde\n", timp_executie);
return 0;
}*/