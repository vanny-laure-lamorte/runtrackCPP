#include <iostream>
using namespace std;

struct Point {
    int x; 
    int y; 
};

int main(void) {

    Point p;

    p.x = 10; 
    p.y = 20; 

    cout << "Avant Modification " << endl;
    cout << "Valeur de x : " << p.x << endl; 
    cout << "Valeur de y : " << p.y << endl;
    cout << endl;  

    Point *ptr = &p; 

    ptr->x = 2;
    ptr->y = 3;

    cout << "Apres Modification " << endl; 
    cout << "Valeur de x : " << p.x << endl; 
    cout << "Valeur de y : " << p.y << endl;

    return 0;

}

