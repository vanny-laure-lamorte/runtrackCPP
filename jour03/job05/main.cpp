#include <iostream>
#include <regex>
#include <string>
using namespace std;

bool checkFormat (const string& heure) {
    regex pattern("\\d{2}h\\d{2}");
    return regex_match(heure, pattern);
}


int main() {

    string h; 

    cout << "Entrez une heure sous format XXhXX : "; 
    cin >> h; 

    if (checkFormat(h)) {
        cout << "Le format est valide." << endl;
    }
    else {
        cout << "Le format est invalide." << endl;
    }      
    
    return 0;
}
