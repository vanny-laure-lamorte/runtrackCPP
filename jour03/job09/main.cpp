#include <iostream>
#include <cstring>

using namespace std;

bool isSubstring(const char* chaine1, const char* chaine2) {
    return strstr(chaine2, chaine1) != nullptr;
}

int main() {
    char chaine1[100];
    char chaine2[100];

    cout << "Entrez la premiere chaine : ";
    cin.getline(chaine1, 100);

    cout << "Entrez la deuxieme chaine : ";
    cin.getline(chaine2, 100);

    if (isSubstring(chaine1, chaine2)) {
        cout << "La premiere phrase est incluse dans la deuxieme." << endl;
    } else {
        cout << "La premiere phrase n'est pas incluse dans la deuxieme." << endl;
    }

    return 0;
}
