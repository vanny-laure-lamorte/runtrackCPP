#include <iostream>
#include <cstring>

using namespace std;

void reverseString(char* a) {
    char* start = a;
    char* end = a + strlen(a) - 1;    

    while (start < end) {
     
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(void) {

    char a[100]; 
    cout << "Entrez une chaine de caractere : "; 
    cin.getline(a, 100);
    cout << " La chaine de caractere de départ : " << a << endl;

    reverseString(a);

    cout << "La chaine de caractere apres l'echange :" << a << endl; 

    return 0;

}

