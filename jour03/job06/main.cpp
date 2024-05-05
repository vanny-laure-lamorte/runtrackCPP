#include <iostream>
#include <string>
using namespace std;

int main() {
    const int taille = 10;
    int T[taille];
    int count = 0;
    int result[taille]; 
    int resultCount = 0;

    cout << "Veuillez saisir 10 entiers :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Entier " << i+1 << " : ";
        cin >> T[i];
    }

    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            result[resultCount] = T[i]; 
            resultCount++;
            count++;
        }
    }

    cout << "Il y a " << count << " nombres entiers superieurs ou egaux a 5." << endl;

    if (count > 0) {
        cout << "Les nombres superieurs ou egaux a 5 sont : ";
        for (int i = 0; i < resultCount; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Aucun nombre n'est superieur ou egal a 5." << endl;
    }

    return 0;
}
