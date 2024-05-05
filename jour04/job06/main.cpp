#include <iostream>
using namespace std;

int main(void) {

   int entier = 17;
   float flottant = 3.14;
   double reel = 123.345;
   string caractere = "La Plateforme"; 

   cout <<"Adresse memoire de la variable entier : " <<  &entier << ", valeur : " << entier << endl;
   cout <<"Adresse memoire de la variable flottant : " << &flottant << ", valeur : " << flottant <<  endl;
   cout <<"Adresse memoire de la variable entier reel : " << &reel << ", valeur : " << reel <<  endl;
   cout <<"Adresse memoire de la variable caractere : " <<  &caractere << ", valeur : " << caractere <<  endl;


    return 0;

}

