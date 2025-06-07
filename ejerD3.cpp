#include <iostream>
using namespace std;
int main(){
     int edad;


     //Preguntar al usuario la edad para un parque//

     //niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.//

     cout<<"Por favor ingresa la edad de tu niñ@ y sabras cual es la tarifa a pagar"<<endl;
     cin>>edad;

     if (edad<5)
     {
        cout<<"Entra gratis"<<endl;

     }

     else if (edad>12)
     {
        cout<<"Debes de pagar $10"<<endl;
     }

     else if (edad>=6 && edad<=12)
     {
        cout<<"Pagaras $5"<<endl;
     }
     
     else if (edad>18)
     {
        cout<<"Ya eres un adulto,no cuenta el descuento"<<endl;
     }
     
     cout<<"Disfrutaaaaaa"<<endl;

    return 0;
}