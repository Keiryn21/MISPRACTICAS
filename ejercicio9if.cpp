#include <iostream>
using namespace std;
int main (){

    //beca para estudiante dependiendo de sus faltas y tambien sus notas//

    int promedio=0,faltas=0;

    cout<<"por favor ingresa de cuanto es tu promedio"<< endl ;
    cin>> promedio;

    if(promedio>=85)
    cout<<"felicidades tu promedio es de :"<<promedio<< "has obtenido la beca"<<endl;

    else
    cout<< "lo siento tu promedio no es lo suficiente"<<endl;

    cout<<"cuantas faltas ha tenido,ingresa el total de ellas"<<endl;
    cin>>faltas;

    if (faltas>=3)
    cout<< "tienes muchas faltas"<< endl;

    else 
    cout<<"exelente sigue asi"<<endl;

    //fin del programa//


    return 0 ;
}