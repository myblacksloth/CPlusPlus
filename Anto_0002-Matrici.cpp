#include <iostream>



#define DIMX 4
#define DIMY 3



void leggiMat(double mat[DIMX][DIMY], int dimX, int dimY)
{
    
    int x, y;
    
    
    for (y=0; y<dimY; y++)
    {
        for (x=0; x<dimX; x++)
        {
            printf("Inserisci il numero per l'indice %d %d = ", x, y);
            scanf("%lg", &mat[x][y]);
        }
    }
    
    
}





void stampaMat(double mat[DIMX][DIMY], int dimX, int dimY)
{
    
    int x, y;
    
    for (y=0; y<dimY; y++)
    {
        for (x=0; x<dimX; x++)
        {
            printf("\nSampo l'indice %d %d = %8g", x, y, mat[x][y]);
        }
    }
    
}








double sommaCornice(double mat[DIMX][DIMY], int dimX, int dimY)
{
    double somma = 0;
    

    
    int x, y;
    
    
    for (y=0; y<dimY; y++)
    {
        
        if (y==0)
        {
            for (x=0; x<dimX; x++) somma += mat[x][y];
        }
        if (y==dimY)
        {
            for (x=0; x<dimX; x++) somma += mat[x][y];
        }
        else
        {
            somma += mat[0][y];
            somma += mat[dimX][y];
        }
        
        
    }
    
    
    printf("\ndebug somma= %lg", somma);
    //cast a intero (il rigo sotto serve a provare se il programma funziona correttamente ma e' inutile)
    printf("\nIntero = %d\n", (int)somma);
    return somma;
}






int main()
{
    
    
    double miaMat[DIMX][DIMY];
    
    leggiMat(miaMat, DIMX, DIMY);
    
    stampaMat(miaMat, DIMX, DIMY);
    
    printf("\n\nLa somma dei valori presenti nella cornice e' = %lg", sommaCornice(miaMat, DIMX, DIMY));
    printf("\n\n\n");
    
    
    return 0;
}
