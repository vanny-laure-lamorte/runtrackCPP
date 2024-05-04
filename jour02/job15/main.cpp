#include <iostream>

using namespace std;

int main() {
    int n, nbr1 = 0, nbr2 = 1, suivant;
    
    cout << "Entrez la limite pour la suite de Fibonacci : ";
    cin >> n;

    cout << "Les " << n << " premiers termes de la série de Fibonacci sont : " << endl;
        
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            suivant = i;
        else {
            suivant = nbr1 + nbr2;
            nbr1 = nbr2;
            nbr2 = suivant;
        }
        cout << suivant << endl;
    }

    
    return 0;
}
