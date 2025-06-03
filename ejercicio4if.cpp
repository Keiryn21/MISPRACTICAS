#include <iostream>
using namespace std;
int main (){
    int nota=0;

    //verificar el usuario aprobo//

    cout<< "por favor ingresa tu nota" << endl;
    cin >> nota ;

    if(nota>=80)
    cout<< "has aprobado con exelente notas, feliidades" <<endl;

    else if(nota>=70)
    cout<< "Aprobaste por poco" << endl;

    else 
    cout << "lameno decirte que reprobaste" << endl ;

    //finalizacion del programa//


    return 0;
}