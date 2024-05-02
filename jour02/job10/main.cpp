# include <iostream>

using namespace std; 
#include <cmath>

int main (void){

    float a, b, c;

    do {

        cout << "Saisir une valeur a = ";
        cin >> a;
 
        if (a > 0 ) {

           c = sqrt(a);        
            
            cout << "Sa racine carre est : " << c << endl;
            }       
        

        else if (a < 0 ) {
            cout << "La valeur de a ne peut pas etre negative. " << endl;
        }

    

    } while (a != 0 ); 

}
   
       



