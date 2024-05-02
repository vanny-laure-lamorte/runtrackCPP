# include <iostream>

using namespace std; 
#include <cctype>

int main (void){

    int a, b, c;

    do {

        cout << "Entrez la valeur de a = ";
        cin >> a; 
        cout << "Entrez la valeur de b = ";
        cin >> b; 

        if (a < b ) {

        cout << "Entrez la valeur de c = ";
        cin >> c; 

            if (c >= a && c <=b ){
            cout << "GAGNE ";
            }

            else {
            cout << "PERDU";
            }
        
        }

        else {
            cout << "La valeur de b doit etre superieur \x85 a" << endl;
        }

    } while (a > b ); 
   

}
       



