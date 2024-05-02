# include <iostream>
#include <iomanip>

using namespace std; 

int main (void){

    int i = 1;
    int j;
    int valeur;

    // 1er ligne

    printf("\t\t|");

    for (int a = 1 ; a <= 10; a++){
        printf("\t%d", a);
    }

    printf("\n");

    // 2 ème ligne avec des tirets 

    for (int a = 1 ; a <= 20; a++){
        printf("-----", a);
    }


    // Table de multiplication

    while (i <= 10) {

        printf("\n");

        printf("\t%d", i);

        printf("\t|");


        j = 1;

        while (j <= 10){
            valeur = i*j;
            printf("\t%d", valeur);
            j++;
        }

        i++;
    }


}