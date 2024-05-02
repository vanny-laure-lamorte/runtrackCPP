# include <iostream>
using namespace std; 

int main (void){

    float a;
    float i = 0;
    float f = 1;

    cout << "Saisir une valeur a = ";
    cin >> a;

    for (i = 1; i <= a; i++) {


        f = f * i;

    };  
   
    cout << "Le factoriel de " << a << " est : " << f << endl;

  }
 
       

  
    



