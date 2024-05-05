#include <iostream>
#include <string>
using namespace std;


int main(void) {

    // Tableau fruits

    string tab[5] = {"pomme", "poire", "mangue", "fraise", "coco"} ; 

    int i = 0;
    cout << "Tableau fruits : ";
    for (int i = 0; i < 5; i++) {
        cout << tab[i] << " ";
    }
    cout <<endl;

    
    // Tableau Favoris

    int nb; 
    cout << "Indiquer le nombre de fruits preferes : " << endl;
    cin >> nb; 

    string *favoris =  new string[nb];
    
    cout << "Entrez " << nb << " de fruits preferes" << endl;  

    for (i = 0; i < nb; i++) {
        cout << "Entier " << i+1 << ": ";
        cin >> favoris[i];
    };

    cout << "Contenu du tableau favoris : " << endl;
    for (int i = 0; i < nb; ++i) {
        cout << favoris[i] << " ";
    }

    cout << endl;

    delete[] favoris;

    return 0;
}
