#include <iostream>
using namespace std;

int main(void) {

int tab[5] = {1, 10, 12, 20, 3};
int i = 0;

for (i=0; i <5; i++) {
    cout << "Adresse de pointage du tableau : " << tab + i<< endl;
    cout << "La valeur de l'adresse est : " << *(tab+i) << endl;
};
    return 0;

}

