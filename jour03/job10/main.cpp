#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>

using namespace std;

bool compare(char a, char b) {
    return tolower(a) < tolower(b);
}

int main() {
    char string[100]; 
    char string2[100] = "Bonjour";

    cout << "Ecrire une chaine de caractere : "<< endl;
    cin >> string; 

    int result = strcasecmp(string, string2);

    if (result > 0) {
        cout <<"Ordre lexicographique : " << string2 <<" "<< string;
    } else if (result < 0) {
        cout <<"Ordre lexicographique : " << string <<" "<< string2;      
    } else {
        cout << "Les deux chaines sont les memes dans l'ordre lexicographique." << endl;
    }

    return 0;
}
