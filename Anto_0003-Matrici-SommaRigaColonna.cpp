//data una matrice n*m calcolare la somma degli elementi della riga r e della colonna c dati in input, visualizzare le due somme


#include <iostream>
#include <cstdlib>

//i valori della dimensione li puoi modificare a tuo piacimento
#define n 3
#define m 4

using namespace std;



void leggiMatrice(int mat[n][m], int dimN, int dimM)
{
    int x, y;
    
    for (y=0; y<dimM; y++)
    {
        for (x=0; x<dimN; x++)
        {
            cout << "Inserisci un valore per l'indice " << x << " " << y << " : ";
            // in alternativa puoi usare
            // printf("\nInserisci un valore per l'indice %d %d : ", x, y);
            
            cin >> mat[x][y];
            //in alternativa puoi usare
            //scanf("%d", &mat[x][y]);
            
        }
    }
}




void stampaMatrice(int mat[n][m], int dimN, int dimM)
{
    int x, y;
    
    for (y=0; y<dimM; y++)
    {
        for (x=0; x<dimN; x++)
        {
            cout << "Il valore dell'indice " << n << m << " e': " << mat[x][y] <<endl;
            //in alternativa puoi usare
            //printf("\nIl valore dell'indice %d %d e': %d\n", x, y, mat[x][y]);
        }
    }
}



int sommaRiga(int mat[n][m], int dimN, int dimM, int riga)
{
    int somma = 0;
    
    int x, y;
    
    for (y=0; y<dimM; y++)
    {
        if (y==riga)
            for (x=0; x<dimN; x++)
                somma += mat[x][y];
    }
    
    return somma;
}




int sommaColonna(int mat[n][m], int dimN, int dimM, int colonna)
{
    int somma = 0;
    
    int x, y;
    
    for (x=0; x<dimN; x++)
    {
       if (x==colonna)
           for (y=0; y<dimM; y++)
               somma += mat[x][y];
    }
    
    return somma;
}




int main()
{
    
    int miaMatrice[n][m];
    
    leggiMatrice(miaMatrice, n, m);
    
    stampaMatrice(miaMatrice, n, m);
    
    int sommariga;
    cout << "Inserisci l'indice della riga di cui sommare i valori: ";
    cin >> sommariga;
    cout << "La somma dei valori della riga " << sommariga << " e': " << sommaRiga(miaMatrice, n, m, sommariga) << endl;
    
    int sommacolonna;
    cout << "Inserisci l'indice della colonna di cui sommare i valori: ";
    cin >> sommacolonna;
    cout << "La somma dei valori della colonna " << sommacolonna << " e': " << sommaColonna(miaMatrice, n, m, sommacolonna) << endl;
    
    
    return 0;
}
