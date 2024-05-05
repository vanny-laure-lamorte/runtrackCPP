#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool palindrome(const string& mot) {
    int debut = 0;
    int fin = mot.length() - 1;
    
    while (debut < fin) {
        if (tolower(mot[debut]) != tolower(mot[fin])) { // 
            return false;
        }
        debut++;
        fin--;
    }

    return true;
}

int main() {
    vector<string> tab = {"radar", "hello", "Ivel", "stats", "world"};
  
    cout << "Les palindromes sont : " << endl;

    for (const string& mot : tab) {
        if (palindrome(mot)) {
            cout << mot << endl;
        }
    }

    return 0;
}
