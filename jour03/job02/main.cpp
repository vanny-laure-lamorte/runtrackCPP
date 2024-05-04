#include <iostream>
#include <string>

using namespace std;

string supprimerVoyelles(string str) {
    string result = "";

    for (char c : str) {

        if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u' && tolower(c) != 'y') {
            result += c;
        }
    }
    return result;
}

int main() {
    string chaine = "vive la plateforme !";
    cout << "Phrase originale : " << chaine << endl;
    
    string chaineSansVoyelles = supprimerVoyelles(chaine);
    
    cout << "Phrase sans voyelles : " << chaineSansVoyelles << endl;
    
    return 0;
}
