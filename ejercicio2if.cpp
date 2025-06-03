#include <iostream>
using namespace std;

int main (){

    int numero=0;
    // Determinar si los numeros que se lo solicitan al usuario si son pares o no//

    cout<<"por favor ingrese un numero" << endl ;
    cin>>numero;

    if (numero%2==0)
    cout<< "tu numero es par"<< endl ;
   
    else
    cout<< "tu numero es impar" << endl;

   // finalizacion del programa//

    return 0;
}