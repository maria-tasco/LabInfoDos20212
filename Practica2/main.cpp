#include <iostream>
#include <cstdlib>

using namespace std;
int cantElementosArray ( char *array);// de esta forma le estoy indicando que estoy esperando un apuntador ("una dirección de memoria")
void caracterNumtoInt (char *array, int *ptrNum, int n);
int main()
{
    int op=1;
    int num1 = 0; // Se decide usar variavble globales en este caso para el ahorro de memoria //¿Lo que se define en un case luego se borra como pasa en las funciones.
    while ( op != 0)
    {
        cout<<endl<<endl<<"Seleccione una opcion"<<endl;
        cout<<"2.programa que genera un arreglo de 200 letras mayúsculas aleatorias, imprime este arreglo y luego imprime cuantas veces se repite cada letra en el arreglo."<<endl;
        cout<<"4.Para convertir una cadena de numeros enteros a un solo numero entero"<<endl;
        cout<<"5.Para convertir un numero entero en un cadena de caracteres"<<endl;
        cout<<"7.Para eliminar los caracteres repetidos de una cadena de caracteres"<<endl;
        cout<<"10.Programa que permite convertir un número en el sistema romano al sistema arábigo usado actualmente."<<endl;
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
                int arrayCont [26]{0};
                srand(time(NULL));
                for (int rango = 0; rango < 200; rango ++ ){
                    num1=65+rand()%(91-65);
                    cout << (char)num1 << " ";
                    switch ((char)num1) {
                        case 'A': arrayCont [0] +=1; break;
                        case 'B': arrayCont [1] +=1; break;
                        case 'C': arrayCont [2] +=1; break;
                        case 'D': arrayCont [3] +=1; break;
                        case 'E': arrayCont [4] +=1; break;
                        case 'F': arrayCont [5] +=1; break;
                        case 'G': arrayCont [6] +=1; break;
                        case 'H': arrayCont [7] +=1; break;
                        case 'I': arrayCont [8] +=1; break;
                        case 'J': arrayCont [9] +=1; break;
                        case 'K': arrayCont [10] +=1; break;
                        case 'L': arrayCont [11] +=1; break;
                        case 'M': arrayCont [12] +=1; break;
                        case 'N': arrayCont [13] +=1; break;
                        case 'O': arrayCont [14] +=1; break;
                        case 'P': arrayCont [15] +=1; break;
                        case 'Q': arrayCont [16] +=1; break;
                        case 'R': arrayCont [17] +=1; break;
                        case 'S': arrayCont [18] +=1; break;
                        case 'T': arrayCont [19] +=1; break;
                        case 'U': arrayCont [20] +=1; break;
                        case 'V': arrayCont [21] +=1; break;
                        case 'W': arrayCont [22] +=1; break;
                        case 'X': arrayCont [23] +=1; break;
                        case 'Y': arrayCont [24] +=1; break;
                        case 'Z': arrayCont [25] +=1; break;
                    }
                }
                for (int lcont = 0; lcont < 25; lcont++){
                    switch (lcont) {
                        case 0: cout<< "A: " <<arrayCont[lcont] << endl;; break;
                        case 1: cout<< "B: " <<arrayCont[lcont] << endl;; break;
                        case 2: cout<< "C: " <<arrayCont[lcont] << endl;; break;
                        case 3: cout<< "D: " <<arrayCont[lcont] << endl;; break;
                        case 4: cout<< "E: " <<arrayCont[lcont] << endl;; break;
                        case 5: cout<< "F: " <<arrayCont[lcont] << endl;; break;
                        case 6: cout<< "G: " <<arrayCont[lcont] << endl; break;
                        case 7: cout<< "H: " <<arrayCont[lcont] << endl; break;
                        case 8: cout<< "I: " <<arrayCont[lcont] << endl; break;
                        case 9: cout<< "J: " <<arrayCont[lcont] << endl; break;
                        case 10: cout<< "K: " <<arrayCont[lcont] << endl; break;
                        case 11: cout<< "L: " <<arrayCont[lcont] << endl; break;
                        case 12: cout<< "M: " <<arrayCont[lcont] << endl; break;
                        case 13: cout<< "N: " <<arrayCont[lcont] << endl; break;
                        case 14: cout<< "O: " <<arrayCont[lcont] << endl; break;
                        case 15: cout<< "P: " <<arrayCont[lcont] << endl; break;
                        case 16: cout<< "Q: " <<arrayCont[lcont] << endl; break;
                        case 17: cout<< "R: " <<arrayCont[lcont] << endl; break;
                        case 18: cout<< "S: " <<arrayCont[lcont] << endl; break;
                        case 19: cout<< "T: " <<arrayCont[lcont] << endl; break;
                        case 20: cout<< "U: " <<arrayCont[lcont] << endl; break;
                        case 21: cout<< "V: " <<arrayCont[lcont] << endl; break;
                        case 22: cout<< "W: " <<arrayCont[lcont] << endl; break;
                        case 23: cout<< "X: " <<arrayCont[lcont] << endl; break;
                        case 24: cout<< "Y: " <<arrayCont[lcont] << endl; break;
                        case 25: cout<< "Z: " <<arrayCont[lcont] << endl; break;
                    }

                }

                break;
            }
            case 4: {
                char caracterNum[10]{" "};
                int num[10]{0};
                int *ptrNum = num;

                cout << "Ingrese hasta 10 numeros, sin espacios ni ningun otro caracter: " << endl<< endl;
                cin >> caracterNum;

                num1=0; //saber el tamaño del arreglo y puede imprimir e iterar hasta num1
                num1 = cantElementosArray(caracterNum);

                caracterNumtoInt(caracterNum,ptrNum,num1);

                for (int i=0; i<num1; i++){
                    cout << num[i];
                }

                break;
            }
            case 5: {

                break;
            }
            case 7: {
                int j=0,z=0,n=0, cont=0;
                char letra;
                char arrayInicial[15]{" "},arrayAux[15]{" "},arrayFinal[15]{" "};
                cout << "Ingrese una palabra de maximo 15 caracteres y sin espacios: " << endl;
                cin >> arrayInicial;

                n = cantElementosArray(arrayInicial);
                cout << "el arreglo tiene " << n << " elementos" << endl;

                for (int i=0; i < n; i++)
                {
                    cont=0;
                    letra = arrayInicial [i];
                    arrayAux[j]=letra; j++;

                    for (int k=0; k<n; k++) {
                        if (arrayAux[k] == letra)
                            cont++;
                    }

                    if (cont == 1){
                        arrayFinal[z]=letra; z++;
                    }
                }
                for (int i=0; i<n; i++){
                    cout << arrayFinal[i];
                }

                break;
            }
            case 10: {

                break;
            }
        }
    }
    return 0;
}

int cantElementosArray ( char *array) {
    //mientras que array[i]!='\0' sea direferente al caracter de fin de cadena
    int n=0;
    for (int i=0;array[i]!='\0';i++ ) {
            n++;
    }
    return n;
}
void caracterNumtoInt (char *array, int *ptrNum, int n) {
    for (int i=0; i<n; i++){
        ptrNum[i] = (array[i]-'0');
    }
}
