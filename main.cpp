#include <iostream>

using namespace std;

int Potencia(int a, int b); //Prototipo de la funcion

int size(int a); //Prototipo de la funcion

int main()
{

    int problema = 1;

while(problema != 0){
    cout<<"·________________________________________·"<<endl;
    cout<<"|          Menu de la practica 1          |"<<endl;
    cout<<"º-----------------------------------------º"<<endl;
    cout<<"|Para ejecuar el punto 1 presione (1)     |"<<endl;
    cout<<"|Para ejecuar el punto 2 presione (2)     |"<<endl;
    cout<<"|Para ejecuar el punto 3 presione (3)     |"<<endl;
    cout<<"|Para ejecuar el punto 4 presione (5)     |"<<endl;
    cout<<"|Para ejecuar el punto 7 presione (7)     |"<<endl;
    cout<<"|Para ejecuar el punto 8 presione (8)     |"<<endl;
    cout<<"|Para ejecuar el punto 9 presione (9)     |"<<endl;
    cout<<"|Para ejecuar el punto 12 presione (12)   |"<<endl;
    cout<<"|Para ejecuar el punto 13 presione (13)   |"<<endl;
    cout<<"|Para ejecuar el punto 14 presione (15)   |"<<endl;
    cout<<"|Para ejecuar el punto 14 presione (17)   |"<<endl;
    cout<<"|Para salir presione (0)                  |"<<endl;
    cout<<"------------------------------------------"<<endl;
    cin>>problema;
    switch (problema) {

        case 1:{
            /*Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una con-
              sonante o ninguna de las 2 e imprima un mensaje según el caso.
              Nota: el formato de salida debe ser:
              no es una letra.
              a es una vocal.
              C es una consonante.*/
            cout<<"¿vocal o consonante?"<<endl;
            char vocal;
            cout<<"Ingrese una letra: "<<endl;
            cin>>vocal;
            if (vocal == 'a' || vocal == 'e' ||vocal == 'i' ||vocal == 'o' ||vocal == 'u' || vocal == 'A' ||vocal == 'E' ||vocal == 'I' ||vocal == 'O' ||vocal == 'U'){
                cout<<"la letra "<<vocal<<" es vocal"<<endl;
                break;
            }
            cout<<"la letra "<<vocal<<" es consonante"<<endl;

            break;}

        case 2:{
            /*Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
            y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
            $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.

            Hacer un programa que entregue el número de billetes y monedas de cada denominación para com-
            pletar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la

            cantidad deseada, el sistema deberá decir lo que resta para lograrla.
            Ej: si se ingresa 47810, el programa debe imprimir:
            50000 : 0
            20000: 2
            10000 : 0
            5000: 1
            2000 : 1
            1000: 0
            500 : 1
            200: 1
            100 : 1
            50: 0
            Faltante: 10*/
            cout<<"maquna de devueltas"<<endl;
            int dinero = 0, tickets_50k = 0, tickets_20k = 0, tickets_10k = 0,tickets_5k = 0,tickets_2k = 0,tickets_1k = 0, coins_500=0, coins_200=0,coins_100=0,coins_50=0;
            cout<<"Ingrese la cantidad de dinero: ";
            cin>>dinero;
            tickets_50k = dinero/50000;
            dinero = dinero - (tickets_50k*50000);
            tickets_20k = dinero/20000;
            dinero = dinero - (tickets_20k*20000);
            tickets_10k = dinero/10000;
            dinero = dinero - (tickets_10k*10000);
            tickets_5k = dinero/5000;
            dinero = dinero - (tickets_5k*5000);
            tickets_2k = dinero/2000;
            dinero = dinero - (tickets_2k*2000);
            tickets_1k = dinero/1000;
            dinero = dinero - (tickets_1k*1000);
            coins_500 = dinero/500;
            dinero = dinero - (coins_500*500);
            coins_200 = dinero/200;
            dinero = dinero - (coins_200*200);
            coins_100 = dinero/100;
            dinero = dinero - (coins_100*100);
            coins_50 = dinero/50;
            dinero = dinero - (coins_50*50);


            cout<<"los billete de 50k son: "<<tickets_50k<<endl;
            cout<<"los billete de 20k son: "<<tickets_20k<<endl;
            cout<<"los billete de 10k son: "<<tickets_10k<<endl;
            cout<<"los billete de 5k son: "<<tickets_5k<<endl;
            cout<<"los billete de 2k son: "<<tickets_2k<<endl;
            cout<<"los billete de 1k son: "<<tickets_1k<<endl;
            cout<<"las monedas de 500 son: "<<coins_500<<endl;
            cout<<"las monedas de 200 son: "<<coins_200<<endl;
            cout<<"las monedas de 100 son: "<<coins_100<<endl;
            cout<<"las monedas de 50 son: "<<coins_50<<endl;
            cout<<"la plata que sobra es: "<<dinero<<endl;

        break;}

        case 3:{
            /*Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
            si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
            imprimir posiblemente año bisiesto.
            Nota: el formato de salida debe ser:
            14 es un mes invalido.
            31/4 es una fecha invalida.
            27/4 es una fecha valida.
            29/2 es valida en bisiesto.*/
            cout<<"meses validos"<<endl;
            int mes = 0, dia = 0;
            cout<<"Ingrese un mes: ";
            cin>>mes;

            if (mes<1 || mes>12 ){
                cout<<mes <<" es un mes invalido"<<endl;
                break;
            }

            cout<<"Ingrese un dia: ";
            cin>>dia;


            if (mes == 1 || mes == 3 || mes == 7 || mes == 10 || mes == 12 || mes == 8 ){
                if(1 <= dia && dia <= 31)
                    cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                else
                    cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;

            }

            else if (mes == 4 || mes == 5 || mes == 6 || mes == 9 || mes == 11 ){
                if(1 <= dia && dia <= 30)
                    cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                else
                    cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;

            }
            else if (mes == 2){
                if(1 <= dia && dia <= 28)
                    cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                else if(mes == 2 && dia == 29 )
                    cout<<dia<<"/"<<mes<<" es una fecha valida en bisiesto"<<endl;
                else
                    cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;

            }

        break;}

        case 5:{
        /*Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:

           *
          ***
         *****
        *******
         *****
          ***
           *

        El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
        ejemplo mostrado, el tamaño de la gura es 7.*/

        cout<<"imprimir figurita"<<endl;





        int num=0;
        cout<<"Ingrese un numero impar"<<endl;
        cin>>num;

        int num_espacio=3;
        int n = 0, c=1, a=0,b=(num-1)/2;


        while(c<=num){
            num_espacio=b;
            while (num_espacio!=n){
                cout<<" ";
                num_espacio--;
            }
            while(a != c ){
                cout<<'*';
                a++;
            }
            c = c+2;
            b--;
            a=0;
            cout<<endl;
        }

        c=num-2;
        b=0;
        a=0;
        n=1;
        while(c>0){
            num_espacio=0;
            while (num_espacio!=n){
                cout<<" ";
                num_espacio++;
            }
            while(a != c ){
                cout<<'*';
                a++;
            }
            c = c-2;
            a=0;
            n++;

            cout<<endl;
        }
        break;}

    case 7:{
        /*Problema 7. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
        1. Ej: 1, 1, 2, 3, 5, 8, ....
        Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
        de Fibonacci menores a n.
        Ej: si se ingresa 10, sería la suma de 2+8 =10
        Nota: el formato de salida debe ser: El resultado de la suma es: 10*/

        cout<<"serie de Fibonacci"<<endl;

        int first_number = 0,last_number=1, enesimo=0 , n= 0, c=0;
        cout<<"Ingrese el numero enesimo de la serie de Fibonacci: ";
        cin>>n;

        cout<<last_number<<',';
        while(enesimo < n){
            enesimo = first_number + last_number;
            if (enesimo%2 == 0){
                c = c + enesimo;
            }
            first_number=last_number;
            last_number = enesimo;

        }

        cout<<"El resultado de la suma es: "<<c<<endl;

        break;}

    case 8:{
        /*Problema 8. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
        múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
        Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
        Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
        Nota: el formato de salida debe ser:
        m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
        m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
        y así sucesivamente.*/
        cout<<"sumatoria de multiplos menores que c"<<endl;

        int a=0, b=0, c=0, sumatoria=0;
        cout<<"ingrese el numero 'a': ";
        cin>>a;
        cout<<"ingrese el numero 'b': ";
        cin>>b;
        cout<<"ingrese el numero 'c': ";
        cin>>c;

        for(int i = 1; i<c ; i++){
            if(i%a == 0 ){
                sumatoria += i;
                cout<<","<<i;
            }
        }
        for(int j = 1; j<c ; j++){
            if(j%b == 0 && j%a != 0){
                sumatoria += j;
                cout<<","<<j;
            }
        }

        cout<<" = "<<sumatoria<<endl;

        break;}

    case 9:{
        /*Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma
        de todos sus dígitos elevados a sí mismos.
        Ej: si se ingresa 1223 el resultado sería 1^1 + 2^2 + 2^2 + 3^3 = 36
        Nota: la salida del programa debe ser: El resultado de la suma es: 36.*/

        cout<<"Suma de sus dígitos elevados a sí mismos."<<endl;
        int n=0, sumatoria = 0, number = 0,a = 0;
        cout<<"Ingrese un numero entero: ";
        cin>>n;
        int c = size(n) - 1 , j = size(n);


        for(int i = 1; i < j ; i++){
            number= Potencia(10,c);
            a=n/number;
            sumatoria = sumatoria + Potencia(a,a);
            n = n - a*number;
            c--;
        }
        cout<<sumatoria<<endl;


        break;}

    case 12:{
        /*Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
        Ej: Si se recibe 33 el programa debe imprimir 11.
        Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.*/

        cout<<"Máximo factor primo."<<endl;

        int max_factor = 0, num = 0;
        bool conf = true;
        cout<<"Ingrese un numero: ";
        cin>>num;

        for (int i = 3; i<=num ; i++){
            for(int j = 2; j<i ; j++){
                if(i%j == 0){
                    conf = false;
                    break;}
            }
            if (conf == true && num%i == 0)
                max_factor= i;

            conf = true;

        }

        cout<<"El mayor factor primo de "<<num <<" es: "<<max_factor<<endl;

        break;}

    case 13:{
        /*Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
        menores que el número ingresado.
        Ej: Si se recibe 10 el programa debe imprimir 17.
        Nota: la salida del programa debe ser: El resultado de la suma es: 17.*/


        cout<<"Suma de primos menores a n."<<endl;

        int suma = 2, num = 0;
        bool conf = true;
        cout<<"Ingrese un numero: ";
        cin>>num;

        for (int i = 3; i<num ; i++){
            for(int j = 2; j<i ; j++){
                if(i%j == 0){
                    conf = false;
                    break;}
            }
            if (conf == true)
                suma += i;

            conf = true;
        }

        cout<<"La suma de los numeros primos es: "<<suma<<endl;

        break;}

    case 15:{
        /*Problema 15. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
        se genera una espiral de números como la siguiente:
        21 22 23 24 25
        20  7  8  9 10
        19  6  1  2 11
        18  5  4  3 12
        17 16 15 14 13
        En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
        Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
        de una espiral de nxn.
        Nota: la salida del programa debe ser:
        En una espiral de 5x5, la suma es: 101.
        Otra nota: se le dará una bonicación si imprime la espiral.*/

        cout<<"Espral de Ulam."<<endl;

        int suma = 0, c = 1, size = 0, n = 2, repetir = 0;
        cout<<"Ingrese el tamaño de la matriz: ";
        cin>>size;

        int sizereplic=size;

        int C =0, h = 1,z;

        z = (size-1)/2;
        int ulam[size+1][size+1],a=size*size;

        while (a > 1) {
            for (int columna = size-1; columna >= C ; columna--){
                ulam[C][columna]=a;
                a--;}
            for (int fila = h ; fila < size-1 ; fila++){
                ulam[fila][C]=a;
                a--;}
            for (int columna = C; columna < size-1; columna++){
                ulam[size-1][columna]=a;
                a--;}
            for(int fila = size-1; fila > C; fila--){
                ulam[fila][size-1]=a;
                a--;}
            size = size-1;
            C = C+1;
            h = h+1;
        }
        ulam[z][z]=1;

        for (int i = 0 ; i<=size+C-1; i++ ){
            for(int j = 0; j<=size+C-1 ; j++){
                cout<<ulam[i][j];
                cout<<' ';
            }
            cout<<'\n';
        }


         for (int i =0; i < ((sizereplic-1)/2) ; i++ ){
            for( c ; repetir < 5 ; c = c+n){
                suma += c;
                repetir++;
            }
            c = c-n;
            n = n+2;
            c += n;
            repetir = 1;


        }
        cout<<"En una espiral de "<< sizereplic <<"x"<< sizereplic<< ", la suma es: "<<suma;

        break;}

    case 17:{
        /*Problema 17. La secuencia de números triangulares se forma al sumar su posición en el arreglo
        con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
        Si listamos los números triangulares y sus divisores tenemos:
        1: 1
        3: 1,3
        6: 1,2,3,6
        10: 1,2,5,10
        15: 1,3,5,15
        21: 1,3,7,21
        28: 1,2,4,7,14,28
        Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
        que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
        Tip: el enésimo número triangular se puede representar como n*(n+1)/2.

        Nota: la salida del programa debe ser:
        El numero es: 28 que tiene 6 divisores.*/


        cout<<"Numeros triangulares."<<endl;

        int k = 0, divisores = 0, n=0, def=0,def_n=0;
        bool find = false;

        cout<<"Ingrese a 'k': ";
        cin>>k;

        while (find == false) {
            for(int i = 1; i <= ((n*(n+1))/2); i++){
                if(((n*(n+1))/2) % i == 0)
                    divisores ++;
            }

            if(k <= divisores){
                find = true;
                def = divisores;
                def_n = ((n*(n+1))/2);
            }

            divisores = 0;
            n++;

        }

        cout<<"El numero es: "<<def_n<<" que tiene "<< def <<" divisores"<<endl;



        break;}

    default:{
        cout<<"la opcion "<<problema<<", no existe, intente de nuevo."<<endl;
        break;}
    }

}
    return 0;
}














int Potencia(int a, int b)  //Definicion de la funcion
{
    int resultado=1;
    for(int i=0; i<b; i++)
    {
        resultado*=a; // equilavale resultado=resultado*a;
    }

    return resultado;
}

int size (int a){
    int b= 10, c = 0;
    while(a>=1){
        a=a/b;
        c++;
    }
    return c;
}
