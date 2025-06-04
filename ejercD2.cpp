#include <iostream>
using namespace std;
int main () {

    //solicitar al usuarios los tres lados del triangulo, para luego clasificarlos//

    int lado1=0,lado2=0,lado3=0,triangulo;

    cout<<"por favor ingresa la longitud de los 3 lados del triangulo"<<endl;
    cout<<"lado 1"<< endl;
    cin>>lado1;

    cout<<"lado 2"<< endl;
    cin>>lado2;

    cout<<"lado 3"<<endl;
    cin>>lado3;
    
    if (lado1==lado2 && lado2==lado3){
    cout<<"el triangulo es equilatero"<<endl;

   }
    else if (lado1!=lado2 && lado2!=lado3){
    cout<<"el triangulo es escaleno"<<endl;

    }else 
    cout<<"el triangulo es iscocel"<<endl;

    //finaliza el programa//

    return 0;
}