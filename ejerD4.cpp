#include <iostream>
using namespace std;
int main (){

string user,contra,ver;

cout<<"Por favor ingresa tu username"<<endl;
cin>>user;

cout<<"Por favor ingresa tu palabra clave"<<endl;
cin>>contra;


cout<<"Verifica tu plabra clave ingresandola nuevamente"<<endl;
cin>>ver;


if (contra!=ver)
{
    cout<<"ERROR vuelve a intentarlo"<<endl;
   
}

else
 cout<<"Puedes continuar con el siguiente paso"<<endl;


    return 0;
}