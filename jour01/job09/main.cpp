# include <iostream>
using namespace std; 

int main(void)
{
    int a, b, c;

    cout << "Entrez le premier nombre : ";
    cin >> a;
    cout << "Entrez le second nombre : ";
    cin >> b;
    cout << "Entrez le dernier nombre : ";
    cin >> c;

    int d =  (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << "Le plus grand chiffre est : " << d << endl;

}