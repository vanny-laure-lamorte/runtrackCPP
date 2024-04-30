# include <iostream>
using namespace std; 

int main(void)
{
   int n;

   cin >> n; 
   switch(n){

    case 0: cout <<"Nul\n"; 
    case 1:
    case 2: cout <<"Petit\n";
    break;

    case 3 :
    case 4 :
    case 5 : cout <<"Moyen\n";
    default: cout <<"Grand\n";
   }

   cout << "Pour n = 0, le resultat est : Nul, Petit";
   cout << "Pour n = 4, le resultat est Moyen, Grand: ";
   cout << "Pour n = 10, le resultat est : Grand ";
    cout << "Pour n = -5, le resultat est : Grand"; 
   

}
    

   