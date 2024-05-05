#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Destination {
    string nom;
    int vol_tps;
};

int main() {
    vector<Destination*> destinations; 

    char continuer;
    do {
        Destination* nouvelleDestination = new Destination;

        cout << "Entrez le nom de votre destination : ";
        cin >> nouvelleDestination->nom;

        cout << "Entrez le temps de vol depuis Marseille (en heures) : ";
        cin >> nouvelleDestination->vol_tps;

        destinations.push_back(nouvelleDestination);

        cout << "Voulez-vous ajouter une autre destination ? (o/n) : ";
        cin >> continuer;

    } while (continuer == 'o' || continuer == 'O');

    for (size_t i = 0; i < destinations.size(); ++i) {
        cout << "Destination " << i+1 << " : " << destinations[i]->nom << ", Temps de vol : " << destinations[i]->vol_tps << " heures" << endl;

        char modifier;
        cout << "Voulez-vous modifier le temps de vol pour cette destination ? (o/n) : ";
        cin >> modifier;

        if (modifier == 'o' || modifier == 'O') {
            cout << "Entrez le nouveau temps de vol (en heures) : ";
            cin >> destinations[i]->vol_tps;
        }
    }

    for (size_t i = 0; i < destinations.size(); ++i) {
        delete destinations[i];
    }

    return 0;
}
