# include <iostream>
using namespace std; 

int main(void)
{
    int a;

    cout << "Choisir un chiffre ";
    cin >> a;

    if (a%2 == 0) {
        cout << "La chiffre " << a << " est pair." << endl;
    }

    else {
        cout << "Le chiffre " << a << " est impair." << endl;
    }
}