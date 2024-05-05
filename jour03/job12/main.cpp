#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {

    srand(time(0));

    int nombreMystere = rand() % 101;

    int NBchances = 5;
  
    cout << "Jeu Nombre mystere: Devinez un nombre entre 0 et 100." << endl;
    cout << "Vous avez au total " << NBchances << ". Que la partie commence !" << endl;

    int inputNB;

    while (NBchances > 0) {
        cout << "Entrez votre proposition : ";
        cin >> inputNB;

    if (inputNB == nombreMystere) {
            cout << "Felicitations ! Vous avez trouve le nombre mystère !" << endl;
            break;

        } else if (inputNB < nombreMystere) {
            cout << "Le nombre mystere est plus grand." << endl;
        } else {
            cout << "Le nombre mystere est plus petit." << endl;
        }

        NBchances--;

        if (NBchances > 0) {
            cout << "Il vous reste " << NBchances << " chances." << endl;
        } else {
            cout << "Dommage ! Le nombre mystere etait : " << nombreMystere << endl;
        }
    }

    return 0;
}

