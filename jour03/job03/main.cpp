#include <iostream>
#include <cstring>
using namespace std;

int compareChaines(const char* chaine1, const char* chaine2) {
    int resultat = strcmp(chaine1, chaine2);
    
    return (resultat == 0) ? 0 : 1;
}

int main() {
    const char* chaine1 = "La Plateforme";
    const char* chaine2 = "La Plateforme";

    int resultat = compareChaines(chaine1, chaine2);

    cout << "Phrase 1 : " << chaine1 << endl;
    cout << "Phrase 2 : " << chaine2 << endl; 

    if (resultat == 0) {
        cout << "Les chaines sont egales." << endl;
    } else {
        cout << "Les chaines ne sont pas egales." << endl;
    }

    return 0;
}
