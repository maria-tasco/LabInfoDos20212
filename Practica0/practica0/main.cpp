#include <iostream>

using namespace std;

int main()
{
    int op=0;
    cout << "Ingrese 1 o 2 para ver los ejercicios de la practica 0, u oprima 0 para salir" << endl;
    cin >> op;
    switch (op) {
    case 1: {
        char letra=65;
        for(int i=0; i<7;i++)
        {
            letra=65;
            for(int j=0; j<=i;j++)
              {
                cout <<letra;
                letra=letra+1;
               }
            for(int j=11-2*i;j>0; j--)
            {
                cout<<' ';
            }
            letra='A'+i;
            for(int j=0;j<=i; j++)
            {
              if(letra!='G')
                cout<<letra;
              letra--;
            }
           cout<<endl;
        }

        for (int i=0; i<6; i++)
        {
            letra=65;
            for (int j=6; j>i ; j--){
                if (letra!='G')
                    cout << letra;
                letra++;
            }
            for (int j=1; j<=1+2*i; j++)
            {
                cout<<" ";
            }
            letra='F'-i;
            for (int j=6; j>i ; j--){
                if (letra!='G')
                    cout << letra;
                letra--;
            }
            cout << endl;
        }
    break;
    }
    case 2:
    {
        int num=0, rtamodulo=0, suma=0, aux=0, potencia=1;
        cout << "ingrese un numero: "<< endl;
        cin>> num;
        while (num > 0 ){
            rtamodulo=num%10;
            num= num/10;
            cout << "rtamodulo "<<rtamodulo << endl;
            cout<< "num "<< num << endl;
            //aqui hacer una función o colocar el código que me eleve cada rtamodulo así mismo para luego ser sumado
            if (rtamodulo == 0)
                suma+=0; //¿Debería ser cero o que salga del programa con un break aquí.
            else {
                aux=rtamodulo;
                for (aux; aux > 0; aux --){
                    potencia*=rtamodulo;
                    cout<< "potencia del exponente "<< rtamodulo << " = "<< potencia << endl;

                }
                suma+=potencia;
                cout<< "suma del exponente "<< rtamodulo << " = "<< suma << endl;
            }
            potencia=1;
        }
        cout << "Sume total = "<< suma << endl;
        break;
    }

    }
    return 0;
}
