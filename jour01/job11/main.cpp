# include <iostream>
using namespace std; 

int main(void)
{
    int n, m;
    
    cout << "Entrez la valeur de N : ";
    cin >> n;
    cout << "Entrez la valeur de M : ";
    cin >>m;

    cout << "Avant l'echange, la valeur de N est de " << n <<" et la valeur de M est de " << m << endl;

    int a = n;
    n = m;
    m = a;

    cout << "Apres l'echange, la valeur de N est de " << n <<" et la valeur de M est de " << m << endl;

}