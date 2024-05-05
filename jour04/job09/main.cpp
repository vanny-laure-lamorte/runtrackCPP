
#include <iostream>
#include <string>
using namespace std;

int main(void) {

    int taille;
    int i = 0; 

    cout << "Entrez la taille de votre tableau: ";
    cin >> taille;

    int tableau [taille] = {};

    cout << "Entrez " << taille << "entiers dans votre tableau" << endl;  

    for (i = 0; i < taille; i++) {
        cout << "Entier " << i+1 << ": ";
        cin >> tableau [i];
    };

    cout << "Contenu du tableau : " << endl;
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    
}
