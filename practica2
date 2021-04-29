  #include <iostream>
#include <stdlib.h>
#include<math.h>

using namespace std;


//G5 1,2,4,7,9,10,12,13,15

int size(int a); //Prototipo de la funcion

int comversoraint(char number[15]);//Funcion punto 4

int main()
{
    int problema = 1;

while (problema != 0){

    cout<<"·________________________________________·"<<endl;
    cout<<"|          Menu de la practica 2          |"<<endl;
    cout<<"º-----------------------------------------º"<<endl;
    cout<<"|Para ejecuar el punto 1 presione (1)     |"<<endl;
    cout<<"|Para ejecuar el punto 2 presione (2)     |"<<endl;
    cout<<"|Para ejecuar el punto 4 presione (4)     |"<<endl;
    cout<<"|Para ejecuar el punto 7 presione (7)     |"<<endl;
    cout<<"|Para ejecuar el punto 9 presione (9)     |"<<endl;
    cout<<"|Para ejecuar el punto 10 presione (10)   |"<<endl;
    cout<<"|Para ejecuar el punto 12 presione (12)   |"<<endl;
    cout<<"|Para ejecuar el punto 13 presione (13)   |"<<endl;
    cout<<"|Para ejecuar el punto 15 presione (15)   |"<<endl;
    cout<<"|Para salir presione (0)                  |"<<endl;
    cout<<"------------------------------------------"<<endl;
    cin>>problema;

    switch (problema) {
        case 1:{
        /*
        1. Se necesita un programa que permita determinar la mínima combinación de billetes y monedas
        para una cantidad de dinero determinada. Los billetes en circulación son de $50.000, $20.000,
        $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50. Hacer un
        programa que entregue el número de billetes y monedas de cada denominación para completar
        la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
        cantidad deseada, el sistema deberá decir lo que resta para lograrla. Use arreglos y ciclos para
        realizar el programa.
        Ej: si se ingresa 47810, el programa debe imprimir:
        50000 : 0
        20000: 2
        10000 : 0
        5000: 1
        2000 : 1
        1000: 0
        500 : 1
        200: 1
        100: 1
        50: 0
        Faltante: 10
        */

        int coins[10] ={50000,20000,10000,5000,2000,1000,500,200,100,50};
        int money=0, entero=0, *Pcoins = &coins[0];
        cout<<"Ingrese el dinero: ";
        cin>>money;

        for(int i=0; i<10; i++){
            entero = money/ *(Pcoins+i);
            money = money-(entero *(*(Pcoins+i)));
            cout<<*(Pcoins +i) <<": "<<entero<<endl;
        };
        if (money != 0)
            cout<<"Faltante: "<<money<<endl;;

        break;}

        case 2:{
        /*
        2. Elabore un programa que genere un arreglo de 100 letras mayúsculas aleatorias, imprima este
        arreglo y luego imprima cuantas veces se repite cada letra en el arreglo.
        Ej: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe
        imprimir:
        ABARSECAAB
        A: 4
        B: 2
        C: 1
        Y así sucesivamente.
        */

        char letras[100], *Pletras=&letras[0];
        int random = 0,A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;
        random = rand() % 26;
        random += 65;

        for(int i = 0; i<100 ; i++){
            random = rand() % 26;
            random += 65;
            *(Pletras + i) = random;
        }


        for (int i = 0; i<100 ; i++){
            if(*(Pletras+i) == 'A')
                A++;
            else if (*(Pletras+i) == 'B')
                B++;
            else if (*(Pletras+i) == 'C')
                C++;
            else if (*(Pletras+i) == 'D')
                D++;
            else if (*(Pletras+i) == 'E')
                E++;
            else if (*(Pletras+i) == 'F')
                F++;
            else if (*(Pletras+i) == 'G')
                G++;
            else if (*(Pletras+i) == 'H')
                H++;
            else if (*(Pletras+i) == 'I')
                I++;
            else if (*(Pletras+i) == 'J')
                J++;
            else if (*(Pletras+i) == 'K')
                K++;
            else if (*(Pletras+i) == 'E')
                E++;
            else if (*(Pletras+i) == 'L')
                L++;
            else if (*(Pletras+i) == 'M')
                M++;
            else if (*(Pletras+i) == 'N')
                N++;
            else if (*(Pletras+i) == 'O')
                O++;
            else if (*(Pletras+i) == 'P')
                P++;
            else if (*(Pletras+i) == 'Q')
                Q++;
            else if (*(Pletras+i) == 'R')
                R++;
            else if (*(Pletras+i) == 'S')
                S++;
            else if (*(Pletras+i) == 'T')
                T++;
            else if (*(Pletras+i) == 'U')
                U++;
            else if (*(Pletras+i) == 'V')
                V++;
            else if (*(Pletras+i) == 'W')
                W++;
            else if (*(Pletras+i) == 'X')
                X++;
            else if (*(Pletras+i) == 'Y')
                Y++;
            else
                Z++;

        }

        for (int i = 0; i<100 ; i++){
            cout<<*(Pletras+i);
        }
        cout<<endl;

        cout<<"A: "<<A<<endl;
        cout<<"B: "<<B<<endl;
        cout<<"C: "<<C<<endl;
        cout<<"D: "<<D<<endl;
        cout<<"E: "<<E<<endl;
        cout<<"F: "<<F<<endl;
        cout<<"G: "<<G<<endl;
        cout<<"H: "<<H<<endl;
        cout<<"I: "<<I<<endl;
        cout<<"J: "<<J<<endl;
        cout<<"K: "<<K<<endl;
        cout<<"L: "<<L<<endl;
        cout<<"M: "<<M<<endl;
        cout<<"N: "<<N<<endl;
        cout<<"O: "<<O<<endl;
        cout<<"P: "<<P<<endl;
        cout<<"Q: "<<Q<<endl;
        cout<<"R: "<<R<<endl;
        cout<<"S: "<<S<<endl;
        cout<<"T: "<<T<<endl;
        cout<<"U: "<<U<<endl;
        cout<<"V: "<<V<<endl;
        cout<<"W: "<<W<<endl;
        cout<<"X: "<<X<<endl;
        cout<<"Y: "<<Y<<endl;
        cout<<"Z: "<<Z<<endl;

        break;}

        case 4:{
        /*
        4. Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número
        entero y retorne dicho número. Escriba un programa de prueba.
        Ej: si recibe la cadena “123”, debe retornar un int con valor 123.
        */


        char number[15];
        cout<<"ingrese un numero: ";
        cin>>number;

        cout<<"en entero es: "<<comversoraint(number)<<endl;


        break;}


        case 7:{
        /*
        7. Escriba un programa que reciba una cadena de caracteres y elimine los caracteres repetidos.
        Ej: se recibe bananas debe mostrar bans.
        Nota: la salida del programa debe ser: Original: bananas.
        Sin repetidos: bans.
        */

        char cadena1[15], cadena2[15];
        cout<<"Ingrese una palabra: ";
        cin>>cadena1;
        bool conf = true;
        int c = 0;
        char *Pcadena1 = &cadena1[0],*Pcadena2 = &cadena2[0];

        for (int i =0 ; *(Pcadena1+i) != NULL ; i++){
            for (int j =0 ; *(Pcadena2+j) != NULL ; j++){
                if(*(Pcadena1 + i) == *(Pcadena2 + j)){
                    conf = false;
                }
                if (conf == false)
                    break;

            }
            if (conf == true){
                *(Pcadena2 + c) = *(Pcadena1 + i);
                c++;
            }

            conf = true;
        }

        cout<<"Original: ";
        for (int j =0 ; *(Pcadena1+j) != NULL ; j++){
            cout<<*(Pcadena1+j);
        }
        cout<<"."<<endl<<"Sin repetidos: ";


        for (int j =0 ; *(Pcadena2+j) != NULL ; j++){
            cout<<*(Pcadena2+j);
        }

        cout<<"."<<endl;


        break;}

        case 9:{
        /*
        9. Escribir un programa que reciba un número n y lea una cadena de caracteres numéricos, el
        programa debe separar la cadena de caracteres en números de n cifras, sumarlos e imprimir el
        resultado. En caso de no poderse dividir exactamente en números de n cifras se colocan ceros a
        la izquierda del primer número.
        Ej: Si n=3 y se lee el arreglo 87512395 la suma seria 087+512+395=994.
        Nota: la salida del programa debe ser:
        Original: 87512395.
        Suma: 994.
        */
        char cadena1[15];
        int suma = 0, n=0;
        char *Pcadena1 = &cadena1[0];
        cout<<"Ingrese un numero: ";
        cin>>cadena1;
        cout<<"Ingrese otro  numero: ";
        cin>>n;
        char cadenaint[n], *Pcadenaint = &cadenaint[0];

        for (int i = 0; *(Pcadena1 + i ) != NULL ; i+=n){
            for (int j=0 ; j<n ; j++){
                *(Pcadenaint + j) = *(Pcadena1 + (i+j));
            }
            suma += comversoraint(cadenaint);
        }

        cout<<"La suma es: "<<suma<<endl;


        break;}

        case 10:{
        /*
        10. Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo
        usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano y
        su equivalente arábigo:
        M: 1000
        D: 500
        C: 100
        L: 50
        X: 10
        V: 5
        I: 1
        Los números romanos se forman usando estos caracteres en base a dos reglas:
         Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
         Si un carácter esta seguido por uno de mayor valor, su va lor se resta del total.
        Ej: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
        Nota: la salida del programa debe ser:
        El número ingresado fue: DCLXVI
        Que corresponde a: 666.
        */

        //int I = 1, V=5, X=10, L=50, C=100 , D=500, M=1000;
        bool conf = true;
        int suma=0,a=0,b=0;
        char romanos[8], *Promanos = &romanos[0];
        cout<<"Ingrese un numero rromano en mayusculas por favor: ";
        cin>>romanos;

        for(int i =0 ; conf == true  ; i+=2){
            if (*(Promanos+i) == 'I')
                a=1;
            else if(*(Promanos+i) == 'V')
                a=5;
            else if(*(Promanos+i) == 'X')
                a=10;
            else if(*(Promanos+i) == 'L')
                a=50;
            else if(*(Promanos+i) == 'C')
                a=100;
            else if(*(Promanos+i) == 'D')
                a=500;
            else if(*(Promanos+i) == 'M')
                a=1000;


            for(int j = 1+i ;  ;){
                if (*(Promanos+j) == 'I')
                    b=1;
                else if(*(Promanos+j) == 'V')
                    b=5;
                else if(*(Promanos+j) == 'X')
                    b=10;
                else if(*(Promanos+j) == 'L')
                    b=50;
                else if(*(Promanos+j) == 'C')
                    b=100;
                else if(*(Promanos+j) == 'D')
                    b=500;
                else if(*(Promanos+j) == 'M')
                    b=1000;

                if(*(Promanos+j) <67 || *(Promanos+j) >88){
                    conf = false;
                    a=0;
                    b=0;
                    break;

                }
                break;

            }


            if (a>b){
                suma = suma+b+a;
            }
            else if(b>a){
                suma += b;
                suma -= a;
            }
            else
                suma = suma+a+b;


        }


        cout<<"en arabico es: "<<suma<<endl;


        break;}

        case 12:{
        /*
        12. Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los
        números en cada columna, cada fila y cada diagonal principal tienen como resultado la misma
        constante. Escriba un programa que permita al usuario ingresar una matriz cuadrada, imprima la
        matriz y verifique si la matriz es un cuadrado mágico.
        Nota: un ejemplo de cuadrado mágico es el siguiente:
        4 9 2
        3 5 7
        8 1 6
            */
        int n;
        cout <<"Ingrese el tamaño de la matriz: ";
        cin>>n;
        int sn = (n*((n*n)+1))/2;
        int c = sn;
        bool com = true;
        int cuadro [n][n];
        int (*puntero_cuadro)[n]=cuadro;
        for (int i = 0 ; i<n ; i++){
            for (int j = 0 ; j<n ; j++){
               cout<<"ingrese la posicion "<<"["<<i<<"]"<<"["<<j<<"]: ";
               cin>>*(*(puntero_cuadro + i)+j);
            }
        }
        for (int i = 0 ; i<n ; i++){
            for (int j = 0 ; j<n ; j++){
                cout<<*(*(puntero_cuadro + i) +j)<<" ";

        }
            cout<<endl;
        }
        for (int i = 0 ; i<n ; i++ ){
            if (c != sn){
                com = false;
            }
            c = 0;
            for (int j = 0; j<n ; j++){
               c = c + *(*(puntero_cuadro+i)+j);
            }
        }
        for (int i = 0 ; i<n ; i++ ){
            if (c != sn){
                com = false;
            }
            c = 0;
            for (int j = 0; j<n ; j++){
                c = c + *(*(puntero_cuadro+j)+i);
            }
        }
        c = 0;
        for (int i = 0 ; i<n ; i++ ){
            c = c + *(*(puntero_cuadro+i)+i);
        }

        for (int i = 0 ; i<n ; i++ ){
            if (c != sn){
                com = false;
            }
            c = 0;
            for (int j = (n-1); j >= 0 ; j--){
                c = c + *(*(puntero_cuadro+j)+i);
            }
        }
        if (c != sn){
            com = false;
            }

        if (com == true){
            cout << "Es cuadrado perfecto, la suma de cada fila, columna y diagonal es: "<<sn<< endl;
        }
        else{
            cout << "No es cuadrado perfecto :("<< endl;
        }
        break;}

        case 13:{
        /*
        13. Se tiene una fotografía digitalizada de una porción de la galaxia NGC 1300 que está ubicada a
        61.000.000 de años luz del planeta Tierra. La representación digital de la imagen está
        constituida por una matriz de números enteros; en la cual, cada uno representa la cantidad de
        luz en ese punto de la imagen, así:
        00 03 04 00 00 00 06 08
        05 13 06 00 00 00 02 03
        02 06 02 07 03 00 10 00
        00 00 04 15 04 01 06 00
        00 00 07 12 06 09 10 04
        05 00 06 10 06 04 08 00

        Se puede determinar si el elemento ai,j de la matriz representa una estrella si se cumple que:
        (ai,j + ai,j−1 + ai,j+1 + ai−1,j + ai+1,j)/5 > 6.0

        Elabore y pruebe una función que reciba un puntero a la matriz de enteros como argumento y
        que retorne el número de estrellas encontradas en la imagen. Ignore las posibles estrellas que
        puedan existir en los bordes de la matriz.
        */
        int ngc[6][8] = {0,3,4,0,0,0,6,8,5,13,6,0,0,0,2,3,2,6,2,7,3,0,10,0,0,0,4,15,4,1,6,0,0,0,7,12,6,9,10,4,5,0,6,10,6,4,8,0};
        int (*puntero_ngc)[8] = &ngc[0];
        float find_star, a = 5.0;
        int c = 0;

        for (int i = 1 ; i<5 ; i++){
            for (int j = 1 ; j<7 ; j++){
                find_star = (*(*(puntero_ngc + i) +j) + *(*(puntero_ngc + i) +(j-1)) + *(*(puntero_ngc + i) +(j+1)) + *(*(puntero_ngc + (i-1)) +j) + *(*(puntero_ngc + (i+1)) +j))/a;
                if (find_star > 6){
                    c++;
                }

            }

        }

        cout<<"La cantidad de estrellas en NGC-1300 es de: "<<c<<endl;

        break;}

        case 15:{
        /*
        15. Elabore un programa que permita hallar la intersección entre un par de rectángulos. Represente
        los rectángulos como arreglos de 4 datos de la siguiente manera:
         Los primeros 2 datos corresponden a las coordenadas de la esquina superior izquierda del
        rectángulo (x, y).
         Los siguientes 2 datos representan el ancho y la altura del rectángulo.

        Figura 2. Parámetros del rectángulo.

        Implemente una función que reciba 2 arreglos que representen los rectángulos A y B, y por
        referencia retorne un rectángulo C (con la misma estructura descrita anteriormente) que corresponda
        a la intersección de A y B.

        Ej: Si se ingresan los rectángulos A y B representados por los arreglos {0, 0, 8, 4} y {5, 2, 6, 7}, el
        rectángulo intersección C debe ser el arreglo {5, 2, 3, 2}
        */
        int x1 , y1 , a1, h1;
        int x2, y2 , a2, h2;
        int coor[4];

        cout<<"Ingrese la posicion en (x) del primer cuadrado: ";
        cin>>x1;
        cout<<"Ingrese la posicion en (y) del primer cuadrado: ";
        cin>>y1;
        cout <<"Ingrese el ancho de el primer cuadrado: ";
        cin>>a1;
        cout <<"Ingrese la altura de el primer cuadrado: ";
        cin>>h1;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Ingrese la posicion en (x) del segundo cuadrado: ";
        cin>>x2;
        cout<<"Ingrese la posicion en (y) del segundo cuadrado: ";
        cin>>y2;
        cout <<"Ingrese el ancho de el segundo cuadrado: ";
        cin>>a2;
        cout <<"Ingrese la altura de el segundo cuadrado: ";
        cin>>h2;
        coor[0] = x2-x1;
        coor[1] = y2-y1;
        coor[2] = a1 - x2;
        coor[3] = h1 - y2;
        cout<<"-----------------------------------------------"<<endl;
        cout<< "La interseccion de A y B es: "<<"{";

        for (int i = 0; i<4 ; i++){
            cout<<coor[i]<<",";
        }
        cout<<"}"<<endl;


        break;}

        case 0:{
        problema =0;
        break;}

        default:{
        cout<<"la opcion "<<problema<<", no existe, intente de nuevo."<<endl;
        break;}



    }


}
    return 0;
}

int size (int a){
    int b= 10, c = 0;
    while(a>=1){
        a=a/b;
        c++;
    }
    return c;
}

int comversoraint(char number[15]){
    char *numbers = &number[0];
    int size=0,entero = 0;

    for(int i = 0;  *(numbers+i) >= 48 && *(numbers+i) <= 57 ; i++){
        size++;
    }

    for (int i = 0; size != 0 ; i++){
        if(*(numbers+i) == '1'){
            entero += 1*pow(10,size-1);
        }
        else if(*(numbers+i) == '2'){
            entero += 2*pow(10,size-1);
        }
        else if(*(numbers+i) == '3'){
            entero += 3*pow(10,size-1);
        }
        else if(*(numbers+i) == '4'){
            entero += 4*pow(10,size-1);
        }
        else if(*(numbers+i) == '5'){
            entero += 5*pow(10,size-1);
        }
        else if(*(numbers+i) == '6'){
            entero += 6*pow(10,size-1);
        }
        else if(*(numbers+i) == '7'){
            entero += 7*pow(10,size-1);
        }
        else if(*(numbers+i) == '8'){
            entero += 8*pow(10,size-1);
        }
        else if (*(numbers+i) == '9')
            entero += 9*pow(10,size-1);
        else if (*(numbers+i) == '0')
            entero += 0;


        size--;

    }

    return entero;
}
