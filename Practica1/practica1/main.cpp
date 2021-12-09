#include <iostream>
using namespace std;

int factorial ( int num1);
int main ()
{
  int op=1;
  int num1 = 0, num2 = 0; // Se decide usar variavble globales en este caso para el ahorro de memoria //¿Lo que se define en un case luego se borra como pasa en las funciones.
  while ( op != 0)
  {
      cout<<"Seleccione una opcion"<<endl;
      cout<<"2.Para ver un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada."<<endl;
      cout<<"3.Para ver un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos."<<endl;
      cout<<"4.Para saber cual numero es mayor"<<endl;
      cout<<"6.Para ver un programa que encuentre el valor aproximado del número de euler en basea la siguiente suma innita:"<<endl;
      cout<<"9.Para la potenciacion"<<endl;
      cout<<"10.Para ver un programa que reciba un número n e imprima el enésimo número primo"<<endl;
      cout<<"11.Para la potenciacion"<<endl;
      cout<<"13.Para la potenciacion"<<endl;
      cout<<"15.Para la potenciacion"<<endl;
      cout<<"16.Para la potenciacion"<<endl;
      cout<<"0.Para salir"<<endl;
      cin>>op;
      switch (op)
      {
        case 2:
            cout<< "Ingrese la cantidad deseada para determinar la mínima combinación de billetes y monedas: "<< endl;
            cin >> num1;
            num2 = 10000;
                for (int i=0; i<3; i++)
                {
                    for ( int j=0; j<3; j++)
                    {
                    cout << (j*j-4*j+5)*num2 << " = "<< num1/((j*j-4*j+5)*num2) << endl ;
                    num1 = num1 % ((j*j-4*j+5)*num2);
                    }
                    num2/=10;
                }
            cout << "50 = " << num1/50 << endl << "Faltante = "<< num1 % 50 << endl;
            break;

          case 3:

              cout << "Ingrese el numero de un mes 1-12: "<< endl; cin >> num1;

              if ( (num1 > 12) || (num1 < 1))
              {
                  cout << num1 <<" Es un mes invalido "<< endl;
                  return 0;
              }

              cout << "Ingrese el día del mes:  " << endl; cin >> num2;

              if ( (num1 == 1) || (num1 == 3) || (num1 == 5) || (num1 == 7) || (num1 == 8) || (num1 == 10) || (num1 == 12) )
              {
                  if (num2 <= 31 && num2 >=1)
                      cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
                  else
                      cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
              }
              else if ( num1 == 2)
              {
                  if ( num2 <=28 && num2 >=1)
                      cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
                  else if (num2 == 29)
                      cout << num2 << " / " << num1 << " Es una fecha valida en bisiesto" << endl;
                  else
                      cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
              }
              else
              {
                  if ( num2 <= 30 && num2 >=1)
                      cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
                  else
                      cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
              }
              break;

          case 4:
          {
             num1 = 1245; num2 = 345; // numeros base de prueba



             break;
          }

          case 6:
          {
            float suma = 0.0;
            cout << "Ingrese el numero de elemento que quiere usar para la aproximacion: " << endl; cin >> num1;
            num1 -- ;

            for (int i=num1; i>=0; i--)
            {
                num2 = factorial(num1);
                suma += 1/(float)num2;
                num1 -- ;
            }

            cout << "e es aproximadamente: " <<  suma << endl;
            break;
          }
          case 9:
          {
                int num=0, rtamodulo=0, suma=0, aux=0, potencia=1;
                  cout << "ingrese un numero: "<< endl;
                  cin>> num;
                  while (num > 0 )
                  {
                      rtamodulo = num % 10;
                      num= num/10;
                      cout << "rtamodulo "<<rtamodulo << endl;
                      cout<< "num "<< num << endl;
                      //aqui hacer una función o colocar el código que me eleve cada rtamodulo así mismo para luego ser sumado
                      if (rtamodulo == 0)
                          suma+=0; //¿Debería ser cero o que salga del programa con un break aquí.
                      else
                      {
                          aux=rtamodulo;
                          for (aux; aux > 0; aux --)
                          {
                              potencia*=rtamodulo;
                              //cout<< "potencia del exponente "<< rtamodulo << " = "<< potencia << endl;

                          }
                          suma+=potencia;
                          //cout<< "suma del exponente "<< rtamodulo << " = "<< suma << endl;
                      }
                      potencia=1;
                  }
                  cout << "El resultado de la suma es:  "<< suma << endl;
          break;
          }
          case 10:
          {
            num2 = 1;
            cout << "Ingrese un numero: " << endl; cin>> num1; // Numero base de prueba --> Enesimo primo
            if (num1 < 0)
            {
                cout << "El conteo se hace a partir de 0 o 1" << endl;
                return 0;
            }

            //num2 lo usaremos como posible numero primo y es el que al final se sacará
            int cont = 0, i = 1, div = 0, aux = 0;
            while (cont != num1)
            {
                do
                {
                    div = num2 % i;
                    if ( div == 0)
                        aux ++; // Me cuenta cuántos divisores tiene el numero
                    i ++;
                } while ( i <= num2);
                i=1; num2 ++;
                if ( aux == 2)
                {
                    cont ++; // cuenta los numeros primos
                }
                aux = 0;
            }
            num2 -- ;
            cout <<"El primo numero " << num1 << " Es: "<<num2 << endl;
            break;
          }
      }

  }

  return 0;
}

int factorial (int num1)
{
    int rta=1;
    for (int aux= 1; aux<=num1; aux++)
    {
        rta*=aux;
    }
    cout << num1 << "! = "<< rta << endl;
    return rta;
}
