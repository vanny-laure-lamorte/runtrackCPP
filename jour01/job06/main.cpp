# include <iostream>
using namespace std; 

int main(void)
{
    int a;

    cout << "Choisir un chiffre ";
    cin >> a;
    
    cout << "Voici la table de multiplication de " << a <<":"<< endl;
    for (int i = 1; i <= 10; ++i) {
        cout << a << " x " << i << " = " << a * i << endl;
    }
}