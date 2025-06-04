#include <iostream>
using namespace std;
int main (){

    int temperatura;
    //evaluacion de temperatura//

    cout <<"por favro ingresa a cuantos grados celsius estas actualmente"<< endl;
    cin >> temperatura;
    
    if (temperatura<15)
    cout<<"esta mmuy frio,abigrate bien"<< endl;

    else if (temperatura>25)
    cout<<"esta en temperatura templada"<<endl;

    else 
    cout<<"esta caliente,busca un refresco"<<endl;

    //fin del programa//


    return 0;
}