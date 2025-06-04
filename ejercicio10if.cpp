#include <iostream>
using namespace std;
int main (){

    //tarifas de paquetes//
    int peso=0;

    cout<<"por favor ingresa cuanto pesa tu paquete"<< endl ;
    cin >> peso;

    if (peso<=5)
    cout<< "la tarifa sera de $5"<< endl ;

    else if (peso<10)
    cout<< "la tarifa es de $10"<< endl;

    else
    cout<< "la tarifa es de $15"<< endl;

    return 0 ;
}