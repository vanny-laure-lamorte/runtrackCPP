#include <iostream>
using namespace std;

int main(void) {

    int a = 1; 
    int b = 2; 
    int c = 3; 

    cout << "Avant Modification " << endl; 
    cout << "Entier 1 : " << a << endl; 
    cout << "Entier 2 : " << b << endl; 
    cout << "Entier 3 : " << c << endl;
    cout << endl;  

    int *ptr1 = &a; 
    int *ptr2 = &b; 
    int *ptr3 = &c;  

    *ptr1 = 10;    
    *ptr2 = 20;
    *ptr1 = 30;

    cout << "Apres Modification " << endl; 
    cout << "Entier 1 : " << a << endl; 
    cout << "Entier 2 : " << b << endl; 
    cout << "Entier 3 : " << c << endl; 

    return 0;

}

