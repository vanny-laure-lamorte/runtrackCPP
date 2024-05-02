# include <iostream>

using namespace std; 
#include <cctype>

int main (void){

    int a;

    do {  
  
    cout << "Saisir une note : "  << endl;
    cin >> a;

        if (a <= 20) {

            if (a > 10 ) {
                cout << "Valid"<<char(130)<< endl;
            }

            else {
                cout <<"Non valid" <<char(130)<< endl;
                }

        }

        else {
            cout <<"Veuillez saisir une note entre 0 et 20"<< endl;

            
        }

        } while (a > 20 );

}

