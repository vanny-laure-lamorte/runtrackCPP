# include <iostream>

using namespace std; 
#include <cctype>

int main (void){

    int op = 0;
    double a = 0, b = 0; 
    double resultat = 0;

    cout << "Quelle operation souhaitez vous faire ? \n 1) Addition \n 2) Soustraction \n 3) Multiplication \n 4) Division "  << endl;
    cin >> op;

    if (op >= 1 && op <= 4) {

        cout << "Donnez une valeur a = " << endl;
        cin >> a;

            if (op >= 1  && op <= 4 ){
                cout << "Donnez une valeur b =" << endl;
                cin >> b;

                if (op == 1)
                    {
                        resultat = a + b;
                        cout << "Le resultat de l'addition de " << a << " et de " << b << " est egal a " << resultat << ". \n" << endl;
                    }
                    if (op == 2)
                    {
                        resultat = a - b;
                        cout << "Le resultat de la soustraction de " << a << " et de " << b << " est egal a " << resultat << ". \n" << endl;
                    }
                    if (op == 3)
                    {
                        resultat = a * b;
                        cout << "Le resultat de la multiplication de " << a << " et de " << b << " est egal a " << resultat << ".\n" << endl;
                    }
                    if (op == 4)
                    {
                        resultat = a / b;
                        cout << "Le resultat de la division de " << a << " et de " << b << " est egal a " << resultat << ".\n" << endl;
                    }

            }

    }

    else {cout <<"Cette operation n'existe pas." <<endl;}

    return 0;

}


