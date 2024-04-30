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
