#include <iostream>
using namespace std;

int main() {

    int x = 12; 
    cout << "La valeur de x AVANT modification : " << x << endl;

    int &ref_x = x;
    ref_x = 21; 

    cout << "La valeur de x APRES modification : " << x << endl; 

    return 0;
}
