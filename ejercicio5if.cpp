#include <iostream>
using namespace std;
int main (){
    int monto=0,descuento=0, total=0;

    //descuento de tienda, se le aplicara el 10% al usuarios si su monto fue de mas de $100//

    cout<< "Por favor ingresa de cuanto fue el monto" << endl;
    cin>>monto;

    if( monto>=100){
   ( descuento=monto*0.10) ;
   total=monto-descuento;
    cout << "tienes un 10 de descuento " <<endl;
    cout<< "el total a pagar es de : $  "<<total<< endl;
}
    
    else 
    cout << "gracias por tu compra" <<endl;


    return 0;
}