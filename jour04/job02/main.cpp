#include <iostream>
using namespace std;

int main(void) {

int v1 = 6; 
int v2 = 8; 

cout <<"Valeur 1 avant l'echange : " << v1 << endl;
cout <<"Valeur 2 avant l'echange : " << v2 << endl; 
cout << endl;

int *ptr1 = &v1; 
int *ptr2 = &v2; 

int v3 = *ptr1;

*ptr1 = *ptr2;
*ptr2 = v3;

cout << "Valeur 1 apres l'echange : " << v1 << endl; 
cout << "Valeur 2 apres l'echange :" << v2 << endl; 

return 0;

}

