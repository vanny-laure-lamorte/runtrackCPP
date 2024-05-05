#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Note {
    string nom;
    string prenom;
    double valeur;
};

// Ajouter note 
void ajouterNote(vector<Note> &listeNotes) {
    Note nouvelleNote;
    cout << "Nom de l'etudiant: ";
    cin >> nouvelleNote.nom;
    cout << "Prenom de l'etudiant: ";
    cin >> nouvelleNote.prenom;
    cout << "Note de l'etudiant: ";
    cin >> nouvelleNote.valeur;
    listeNotes.push_back(nouvelleNote);
    cout << "Note ajoutee avec succes." << endl;
}

// Afficher notes
void afficherListeNotes(const vector<Note> &listeNotes) {
    cout << "Liste des notes :" << endl;
    for(const auto& note : listeNotes) {
        cout << "Nom: " << note.nom << ", Prenom: " << note.prenom << ", Note: " << note.valeur << endl;
    }
}

// Supprimer une note
void supprimerNote(vector<Note> &listeNotes) {
    string nom, prenom;
    cout << "Nom de l'etudiant dont vous souhaitez supprimer la note: ";
    cin >> nom;
    cout << "Prenom de l'etudiant: ";
    cin >> prenom;

    for(auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if(it->nom == nom && it->prenom == prenom) {
            it = listeNotes.erase(it);
            cout << "Note de l'etudiant supprimee avec succes." << endl;
            return;
        }
    }
    cout << "Note de l'etudiant non trouvee." << endl;
}

// Calculer moyenne 
void calculerMoyenne(const vector<Note> &listeNotes) {
    if(listeNotes.empty()) {
        cout << "La liste de notes est vide." << endl;
        return;
    }

    double somme = 0;
    for(const auto& note : listeNotes) {
        somme += note.valeur;
    }
    double moyenne = somme / listeNotes.size();
    cout << "La moyenne des notes est : " << moyenne << endl;
}

int main() {
    vector<Note> listeNotes;
    int choix;

    do {
        cout << "\n MENU\n"
             << "1. Ajouter une note\n"
             << "2. Afficher la liste des notes\n"
             << "3. Supprimer une note\n"
             << "4. Afficher la moyenne des notes\n"
             << "5. Quitter\n"
             << "Votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                calculerMoyenne(listeNotes);
                break;
            case 5:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez choisir à nouveau." << endl;
        }
    } while (choix != 5);

    return 0;
}
