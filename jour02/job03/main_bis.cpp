# include <iostream>
using namespace std; 

int main(void)
{
    int i, n, som;

    i = 0; 
    som = 0;

    do

    {     
    cout <<"Donnez un entier "; 
    cin >> n; 

    som = som + n; 

    i = i + 1;

    } while (i < 4);

    cout <<"Somme : " << som;
   

}

int main_bis (void)
{
    int i, n, som;

    i = 0; 
    som = 0;

    while (i < 4)
    { 

    cout <<"Donnez un entier "; 
    cin >> n; 

    som = som + n; 

    i = i + 1;

    } ;

    cout <<"Somme : " << som;

    return 0;
}
  
    

   