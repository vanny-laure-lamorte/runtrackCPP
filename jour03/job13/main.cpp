#include <iostream>
#include <algorithm> // Pour std::sort
#include <vector>

using namespace std;

int main() {
    int tableau1[] = {1, 20, 3, 40}; 
    int tableau2[] = {0, 10, 30, 4}; 
    vector<int> tableau3;


    int taille1 = sizeof(tableau1) / sizeof(tableau1[0]);
    int taille2 = sizeof(tableau2) / sizeof(tableau2[0]);


    int i = 0, j = 0;
    while (i < taille1 && j < taille2) {
        if (tableau1[i] < tableau2[j]) {
            tableau3.push_back(tableau1[i]);
            i++;
        } else {
            tableau3.push_back(tableau2[j]);
            j++;
        }
    }


    while (i < taille1) {
        tableau3.push_back(tableau1[i]);
        i++;
    }

    while (j < taille2) {
        tableau3.push_back(tableau2[j]);
        j++;
    }


    sort(tableau3.begin(), tableau3.end());


    cout << "Tableau 1 et Tableau 2 fusionnes en Tableau 3 avec les chiffres organises en ordre croissant : ";
    for (int num : tableau3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
