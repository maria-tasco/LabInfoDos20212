#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int op=1;
    int num1 = 0, num2 = 0; // Se decide usar variavble globales en este caso para el ahorro de memoria //¿Lo que se define en un case luego se borra como pasa en las funciones.
    while ( op != 0)
    {
        cout<<endl<<"Seleccione una opcion"<<endl;
        cout<<"2.Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo y luego imprima cuantas veces se repite cada letra en el arreglo."<<endl;
        cout<<"4.Para saber cual numero es mayor"<<endl;
        cout<<"5.Para ver un programa que encuentre el valor aproximado del número de euler en basea la siguiente suma innita:"<<endl;
        cout<<"7.Para la potenciacion"<<endl;
        cout<<"10.Para ver un programa que reciba un número n e imprima el enésimo número primo"<<endl;
        cout<<"12.Para la potenciacion"<<endl;
        cout<<"15.Para la potenciacion"<<endl;
        cout<<"18.Para la potenciacion"<<endl;
        cout<<"19.Para la potenciacion"<<endl;
        cout<<"20.Para la potenciacion"<<endl;
        cout<<"0.Para salir"<<endl;
        cin>>op;
        switch (op)
        {
            case 2:
            {
                for (int rango = 1; rango <= 200; rango ++ ){
                    num1=65+rand()%(91-65);
                    cout <<rango <<": "<<num1 << endl;
                }
                break;
            }
        }
    }
    return 0;
}
