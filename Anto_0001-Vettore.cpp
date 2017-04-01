#include <iostream>

#define DIM 5


using namespace std;


void leggiVet (double vet[], int dim)
{
    int x; //variabile che prende il numero da salvare nel vettore
    
    for (x = 0; x<dim; x++)
    {
        printf("Inserisci l'elemento di indice %d = ", x);
        scanf("%lg", &vet[x]);
    }
    
    
}







void stampaVet(double vet[], int dim)
{
    
    
    int x;
    
    for (x = 0; x < dim; x++)
    {
        printf("\nSto stampando l'indice numero: %d\n", x);
        printf("%8g", vet[x]);
        printf("\n\n");
    }
    
}












int main()
{
   
    double mioVettore[DIM];
    
    leggiVet (mioVettore, DIM);
    
    stampaVet(mioVettore, DIM);
    
    return 0;
}
