#include <iostream>
#include <string>
using namespace std;


    struct Staff {
        char nom[50]; 
        char prenom[50]; 
    } ;

    
    struct Etudiant{
        char nom[50]; 
        char prenom[50]; 
    };




int main(void) {

    int i = 0;


    struct Staff staff[2] = {
        {"Cordial", "Alicia"},
        {"Malardier", "Pierre"}
    };

    cout << "Information sur les formateurs: " << endl;
    for (i=0; i<2; i++) {
        cout << staff[i].prenom << " " << staff[i].nom<< endl;
    }; 

    
    struct Etudiant etudiant[3]; 
    
    cout << "Saisir les informations sur les etudiants:" << endl; 

    for (i=0; i<3; i++) {
        cout << "Saisir un prenom : ";
        cin >> etudiant[i].prenom; 
        cout << "Saisir un nom: ";
        cin >> etudiant[i].nom; 
    }

    cout << "Information sur les etudiants: " << endl;
    for (i=0; i<3; i++) {
        cout << etudiant[i].prenom << " " << etudiant[i].nom<< endl;
    }; 

    return 0;


}
