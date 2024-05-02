# include <iostream>
#include <cmath>

using namespace std; 

int main (void){

    int a;
    int b;
    int p = 0;
    int s = 0; 

    // Choisir un nombre
    cout << "Choisir un nombre : "; 
    cin >> a; 


    // Trouver la puissance = p
    int nb = a; 
    while (nb !=0) {
        nb /= 10 ; 
        p = p +1;
    };

    // Monter chaque chiffre à la puissance "p"
    nb = a; 
    while ( nb !=0 ) {
        b = nb % 10; 
        s = s + pow(b, p);
        nb = nb/10;
    };

    // Condition si le nombre est narcissique ou pas

    if ( s == a ) {
        cout << a << " est un chiffre narcissique" << endl; 
    }

    else {
        cout << a << " n'est PAS un chiffre narcissique" << endl; 
    };

    }






