#include <iostream>
using namespace std;

int nbMax (int* tab, int taille) {
    if (taille == 0)
    return -1;

    int max = *tab;
    int i = 0; 

    for (i =1 ; i< taille; i++) {
        if (*(tab+i) > max) {
            max = *(tab+i);
        }
    }
    return max; 
}

int main() {

    int tab [5] = {10,2,30,4,50}; 

    int taille = sizeof(tab) / sizeof(tab[0]);

    int max = nbMax(tab, taille);

    cout << "La valeur maximale dans le tableau est : " << max << endl; 

    return 0;
}

