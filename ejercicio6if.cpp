#include <iostream>
using namespace std;
int main (){

    int numero=0;
    // pedirle al usuario un numero e indicarle si es dia laboral o no//

    cout<<"por favor digita un numero del 1 al 7"<< endl ;
    cin>>numero;

    if (numero>7)
    cout<< "por favor intenta con otro numero, esa opcion no es valida" << endl;

    
    if (numero<0)
    cout<< "por favor intenta con otro numero, esa opcion no es valida" << endl;

    else if (numero=1)
    cout<< "es Lunes, es dia laboral"<< endl;

    
    else if (numero=2)
    cout<< "es Martes es dia laboral"<< endl;

    
    else if (numero=3)
    cout<< "es Miercoles es dia laboral" <<endl;

    
    else if (numero=4)
    cout<< "es Jueves es dia laboral" <<endl;

    
    else if (numero=5)
    cout<< "es Viernes es dia laboral" <<endl;

    
    else if (numero=6)
    cout<< "es Sabado, es fin de semana, disfruta!!!" <<endl;

    else
    cout<< "es Domingo, dsifruta es el ultimo dia de fin de semana" <<endl;

    //fin de el programa//


    return 0;
}