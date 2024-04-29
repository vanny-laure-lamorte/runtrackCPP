#include <iostream>

using namespace std;

int main(void) {
    char c = '\x01'; 
    short int p =10; 

    int x = p  +3;
    int y = c+ 1; 
    int z = p +c ;
    int w = 3 * p + 5 *c; 

    cout << "x est de type int et a une valeur de " << x << endl;
    cout <<"y est de type char et a une valeur de " << y << endl; 
    cout <<"z est de type char et a une valeur de " << z << endl; 
    cout <<"w est de type char et a une valeur de " << w << endl; 


    return 0;
}
