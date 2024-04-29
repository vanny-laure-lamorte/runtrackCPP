#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Entrez une annee : ";
    cin >> a;

    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
        cout << a << " est une annee bissextile" << endl;
    } else {
        cout << a << " n'est pas une annee bissextile" << endl;
    }

    return 0;
}
