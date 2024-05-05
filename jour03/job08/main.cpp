#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main() {

    char tab[100];
    char chaine[100]; 
    
    cout << "Entrez une chaine de caracteres : " << endl;
    cin.getline(chaine, 100);

    strcpy(tab, chaine);

    tab[strlen(chaine)] = '\0';
    
    cout << "Votre chaine de caracteres est : " << tab << endl;

}
