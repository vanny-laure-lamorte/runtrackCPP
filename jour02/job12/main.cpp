# include <iostream>

using namespace std; 

int main (void){

    float n;
    float i = 0;
    float d = 0;

    cout << "Saisir une valeur a = ";
    cin >> n;

    for (i = 1; i <= n; i++) {


        d = d + 1/ i;

    };  
   
    cout << "La somme de " << n << " est : " << d << endl;

  }
 
       

  
    



