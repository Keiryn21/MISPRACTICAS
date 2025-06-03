#include <iostream>
using namespace std;
int main (){
    int num1=0,num2=0;

//comparacion de numeros//

cout<<"por favor ingresa el primer numero" <<endl;
cin>> num1;


cout <<"por favor ingresa el segundo numero" <<endl;
cin >> num2;

if (num1==num2)
cout<< "tus numeros son iguales"  <<endl;

else if (num1>num2)
cout <<"el primer es mayor que el segundo numero"<< endl ;

else 
cout<< "el segundo numero es mayor que el primero" << endl ;

    return 0;
}