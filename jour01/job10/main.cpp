# include <iostream>
using namespace std; 

int main(void)
{
    float a, b, c, d;

    cout << "Prix HT: ";
    cin >> a;
    cout << "Nombre de kilo : ";
    cin >> b;
    cout << "TVA (ex : 15 pour 15%): ";
    cin >> c;

    d = a*b*(1+c/100);
 
    cout << "Le plus prix TTC est de : " << d << endl;

}