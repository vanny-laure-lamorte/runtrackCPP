# include <iostream>
using namespace std; 
#include <string>
#include <algorithm>

int main(void) {   
    
    string a;
    
    cout << "Choisir un nombre (min 2 chiffres): \n";
    cin >> a;

    if (a.length() < 2) {
        cout << "Le nombre doit comporter au moins 2 chiffres." << endl;
        return 1; 
    }

    else {
    reverse(a.begin(), a.end());
    cout << "Votre nombre inverse est : " << a << endl;
    }

    return 0; 
}