#include <iostream>
using namespace std;
int main ()
{
    //verificacion de usuario y contra//

    int usuario,contra=1234,word;

    cout<<"por favor ingresa tu nombre de usuario o tu username"<<endl;
    cin>>usuario;

    cout<<"por favor ingresa tu contraseña"<<endl;
    cin>>word;

    if (word!=contra){
    cout<<"vuelve a intentarlo"<< endl ;
}
    else {
    cout<< "puedes seguir "<< endl;
}


    return 0;
}