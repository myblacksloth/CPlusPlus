/*
 * ALLOCAZIONE DINAMICA DELLA MEMORIA E UTILIZZO DELLE CLASSI
 * (C) Antonio Maulucci 2017
 * Language: C++
 *
 * Questo programma definisce la classe Node ovvero un nodo di una lista concatenata
 * implementa una funzione che mediante l'allocazione dinamica inserisce una stringa in coda ad una lista concatenata
 * implementa una funzione per stampare tutte le stringhe contenute nella lista concatenata
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;



/*prototipi*/
void add(char*);
void print();




class Node
{
    public:
        char* str;
        Node *link;
};




Node* head = NULL;





void add(char* s)
{
    if (head == NULL)
    {
        head = (Node*) malloc( sizeof(Node) );
        head -> str = (char*) malloc(strlen(s)+1);
        strcpy(head->str, s);
    }
    else
    {
        Node* cur = head, prec;
        
        while(cur)
        {
            prec = *cur;
            cur = cur -> link;
        }
        
        Node* newNode = (Node*) malloc(sizeof(Node));
        prec.link = newNode;
        newNode->str = (char*) malloc(strlen(s)+1);
        strcpy(newNode->str, s);
        
    } //end of else
}



void print()
{
    Node* cur = head;
    
    while (cur)
    {
        printf("\n%s", cur->str);
        cur = cur->link;
    }
}




int main(int argc, char* argv[])
{
    
    char str[256] = "";
    
    cout << "Inserisci una stringa: ";
    scanf("%s", str); //from ansi c
    
    add(str);
    
    print();
    
    cout << endl << endl;
    
    return 0;
}
