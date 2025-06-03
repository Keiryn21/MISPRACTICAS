#include <iostream>
using namespace std;

int main(){
    int edad;

    cout<<"Por favor puedes ingresar tu edad"<<endl;
    cin>>edad;
    
    if (edad>=18)
    cout<<"eres mayor de edad"<<endl;

    else 
    cout<<"eres menor de edad"<<endl;

    return 0;
}