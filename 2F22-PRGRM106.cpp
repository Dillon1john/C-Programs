//program 106 
#include <iostream>
using namespace std;

struct store {
    float weight;
    float price;
             };

int main(){
    struct store tomato;
    struct store melons;
    struct store mangoes;
    struct store peppers;
    
    tomato.weight = 2.0;
    tomato.price =  .35;

    melon.weight = 4.0;
    melon.price = 10;

    mangoes.weight = .5;
    magoes.price = 2.50;

    peppers.weight = 2.0;
    peppers.price = 2.75;


    cout<<"Tomato weight is  " tomato.weight << "and the price is "<< tomato.price << endl;
    cout<<"Melon weight is  " melon.weight << "and the price is "<< melon.price << endl;
    cout<<"Mango weight is  " mangoes.weight << "and the price is "<< mangoes.price << endl;
    cout<<"Pepper weight is  " peppers.weight << "and the price is "<< peppers.price << endl;


    system("pause");
    return 0;
    
}