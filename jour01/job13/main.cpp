# include <iostream>
using namespace std; 

int main(void) {   
    
    int N;
    cout << "Choisir un entier N : \n";
    cin >> N;

    int s = 0;
    for (int i = 5; i <= N; ++i) {
        s += i * i * i;
    }
     
    cout << "La somme des cubes de 5^3 a N^3 est : " << s << endl;

    return 0; 
}