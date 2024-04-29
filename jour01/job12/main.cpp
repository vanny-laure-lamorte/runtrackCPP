# include <iostream>
using namespace std; 

int main(void)

{   int a;
    int b = 0;
    cout << "Entrez la valeur 5 : \n";
     
    for (int i = 0; i <5; ++i){   
    cin >> a; 
    b += a;   
    }

   double m = static_cast<double>(b) / 5;

    cout << "La moyenne des 5 valeurs est : "<< m << endl;

    return 0; 
}