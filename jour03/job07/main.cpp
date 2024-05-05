#include <iostream>
#include <string>

using namespace std;



int main() {

    const int taille = 10;
    int T[taille];
    int count = 0;
    int nb_max = 0;

    cout << "Veuillez saisir 10 entiers :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Entier " << i+1 << " : ";
        cin >> T[i];
    }

    for (int i=0; i < taille; i++) {
        if (T[i] > T[nb_max]) {
            nb_max = i;
        }
    }
  
    cout << "L'indice du plus grand nombre est : " << nb_max << endl;  

    return 0;
}
