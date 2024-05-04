#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char chaine [] = "Vive la plateforme"; 

    for (int i = 0; i < strlen(chaine); ++i) {
        chaine[i] = toupper(chaine[i]);
    }
    
    cout << chaine << endl;
    
    return 0;

    
}
