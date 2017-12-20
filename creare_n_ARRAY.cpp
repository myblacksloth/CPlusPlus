/*
 * PROGRAMMA RUDIMENTALE PER LA REALIZZAZIONE DI UN NUMERO N DI ARRAY DATO IN INPUT
 * (C) Antonio Maulucci 2017
 * Language: C++
 *
 * In realta' questo programma non crea n array
 * ma ne crea solo uno ma suddiviso 'virtualmente' in array
 * di lunghezza len
 */

#include <iostream>

using namespace std;

#define len 12 //la lunghezza 'virtuale' di ogni array

int main(int argc, char* argv[])
{
    int n = 0; //il numero di array che l'utente vuole creare
    
    cout << "Quanti array vuoi creare? ";
    cin >> n;
    
    int arrlen = n*len; //la reale lunghezza dell'unico array che viene creato
    
    int array[arrlen]; //creazione dell'array
    
    array[26] = 36; //immissione nell'array di un dato a caso
    
    //il dato inserito viene cercato e viene stampato l'array 'virtuale in cui si trova'
    for (int i=0; i<arrlen; i++)
    {
        if (array[i]==36)
        {
            /*
             il numero dell'array si trova mediante l'operazione
             indiceElemento / lunghezza_virtuale
             ma siccome gli array si contano da 0 in poi
             viene aggiunto 1 per poter stampare il valore secondo lo schema numerodico di riferimento internazionale
             */
            int arr = (i/len)+1;
            cout << "Il valore da cercare si trova nell'array numero " << arr << endl;
        }
    }
    
    return 0;
}
