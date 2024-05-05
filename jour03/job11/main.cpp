#include <iostream>
using namespace std;


int Somme_Pairs(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) { 
            somme += tableau[i];
        }
    }
    return somme;
}

int main() {

    const int taille = 3;
    int tableau[taille];

    cout << "Entrez les " << taille << " entiers du tableau : ";
    
   
    for (int i = 0; i < taille; ++i) {
        cin >> tableau[i];
    }
    
    int resultat = Somme_Pairs(tableau, taille);
    
    cout << "La somme des elements pairs du tableau est : " << resultat << endl;
    
    return 0;
}
