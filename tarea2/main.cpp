#include <iostream>
#include <esconu.h>
#include <cmath>

// Tarea No.2 - Laboratorio de introdcucción a la programación, Maestro Andrés Linares
// Código escrito por Jeffry Alberto Sánchez Francisco, matricula 100612785. En fecha 28 de febrero del 2022

using namespace std;

int main()
{
    BorraPantalla();

    cout << "Bienvenidos al programa para calcular el precio de venta de parcelas. v1.0\n Hecho por Jeffry Alb. Sánchez Fco. - @jeffrycoder." << endl << endl;
    cout << "Este programa corresponde a la tarea 2\ndel Laboratorio de Introducción a la programación,\ncon el maestro Andrés Linares." << endl << endl;
    cout << "El mismo calcula el precio al que se compran 4 parcelas: A,B,C,D y calcula tambien el area total en metros cuadrados de las mismas." << endl << endl;
    cout << "Para posteriormente, dar un valor total de la finca, sumando las parcelas que ya poseia el Don Churumusco" << endl << endl;
    TeclaPresionada("Presiona cualquier tecla para continuar...");
    cout << endl << endl;
    BorraPantalla();

    float metrosComprados = 0; // Variable que contendra cada metro cuadrado comprado de las nuevas parcelas y la inicializamos a cero

    // Determinar área y valor de cada una de las parcelas

    //Proceso para determinar el area y precio de venta de cada parcela

    /* Área parcela A (Rectángulo)

    Datos ...

    Base = 6 mts.
    Altura = 3 mts.

    Fórmula = ...
    area = base * altura

*/
    /* Área parcela B (Triángulo Isósceles)

    Datos ...

    Base = 6 mts
    Altura = 3 mts

    Fórmula = ...
    area = (base * altura) / 2

*/

    // Parcela C

    /* Área parcela C (Cuadrado)

        Para encontrar el valor del lado (hipotenusa) necesitamos aplicar el teorema de pitágoras a los lados conocidos (catetos)
        Datos ...

        Lado == hipotenusa = ?

        Cateto 1 = 3 mts.
        Cateto 2 = 3 mts.
        Hipotenusa = raiz cuadrada de la suma al cuadrado de ambos catetos

        Fórmulas = ...

        hipotenusa = sqrt(pow(cateto1, 2) + pow (cateto2, 2)) ;
        hipotenusa =

        hipotenusa == lado

        area = lado * lado == area = pow(hipotenusa,2);

    */

        // Parcela D

    /* Área parcela D (Triangulo rectangulo)

        Datos

        Base = 3 mts.
        Altura = 3 mts.

    Fórmula = ...
    area = (base * altura) / 2

    */

    // Determinar area total de la nueva finca y nuevo precio considerando que don Churumusco cotiza sus partes actuales a RD$4,000.00 el metro cuadrado
    // Determinar valor de CADA parcela por teclado

    //Parte 1 del problema


    // Parcela A
    cout << "Primero vamos a calcular el precio de venta total de la parcela A" << endl << endl;

    TeclaPresionada("Presiona cualquier tecla para continuar...\n\n");
    BorraPantalla();

    float areaParcelaA;
    float valorVentaParcelaA;
    float precioMetroParcelaA = 5000;

    cout << "Introduce el precio en pesos dominicanos RD$, por metro cuadrado de la Parcela A: ";
    cin >> precioMetroParcelaA;
    cout << endl;

    areaParcelaA = 6 * 3;
    valorVentaParcelaA = areaParcelaA * precioMetroParcelaA;

    cout << "El precio por metro cuadrado introducido para la parcela A fue: " << precioMetroParcelaA << " pesos." << endl;
    cout << "Actualmente el area de la parcela A es equivalente a: " << areaParcelaA << " metros cuadrados" << endl;
    cout << "Entonces el precio de venta final de la parcela A, seran: " << valorVentaParcelaA << " pesos"<< endl << endl;

    metrosComprados = metrosComprados + areaParcelaA;

    TeclaPresionada("Pulsa cualquier tecla para pasar a la siguiente parcela...\n\n");
    BorraPantalla();

    // Parcela B
    cout << "Ahora, vamos a calcular el precio de venta de la parcela B" << endl << endl;

    float areaParcelaB;
    float valorVentaParcelaB;
    float precioMetroParcelaB = 6500;

    cout << "Introduce el precio en pesos dominicanos RD$, por metro cuadrado de la Parcela B: ";
    cin >> precioMetroParcelaB;
    cout << endl;

    areaParcelaB = (6 * 3) / 2;
    valorVentaParcelaB = areaParcelaB * precioMetroParcelaB;

    cout << "El precio por metro cuadrado introducido para la parcela B fue: " << precioMetroParcelaB << " pesos." << endl;
    cout << "Actualmente el area de la parcela B es equivalente a: " << areaParcelaB << " metros cuadrados" << endl;
    cout << "Entonces el precio de venta final de la parcela B, seran: " << valorVentaParcelaB << " pesos"<< endl << endl;

    metrosComprados = metrosComprados + areaParcelaB;

    TeclaPresionada("Pulsa cualquier tecla para pasar a la siguiente parcela...\n\n");
    BorraPantalla();

    // Parcela C

    cout << "A continuacion... Vamos a calcular el precio de venta de la parcela C" << endl << endl;

    float valorVentaParcelaC;
    float precioMetroParcelaC = 5750;

    float cateto1ParcelaC = 3;
    float cateto2ParcelaC = 3;


    cout << "Introduce el precio en pesos dominicanos RD$, por metro cuadrado de la Parcela C: ";
    cin >> precioMetroParcelaC;
    cout << endl;

    float hipotenusa = sqrt((pow(cateto1ParcelaC, 2) + pow (cateto2ParcelaC, 2))) ;

    float areaParcelaC = pow(hipotenusa,2);
    valorVentaParcelaC = areaParcelaC * precioMetroParcelaC;

    cout << "El precio por metro cuadrado introducido para la parcela C fue: " << precioMetroParcelaC << " pesos." << endl;
    cout << "Actualmente el area de la parcela C es equivalente a: " << areaParcelaC << " metros cuadrados" << endl;
    cout << "Entonces el precio de venta final de la parcela C, seran: " << valorVentaParcelaC << " pesos"<< endl << endl;

    metrosComprados = metrosComprados + areaParcelaC;

    TeclaPresionada("Pulsa cualquier tecla para pasar a la siguiente parcela...\n\n");
    BorraPantalla();

    // Parcela D

    float areaParcelaD;
    float valorVentaParcelaD;


    float precioMetroParcelaD = 4670;

    float baseParcelaD = 3;
    float alturaParcelaD = 3;

    cout << "Para finalizar, vamos a calcular el precio de venta de la parcela D" << endl << endl;

    cout << "Introduce el precio en pesos dominicanos RD$, por metro cuadrado de la Parcela D: ";
    cin >> precioMetroParcelaD;
    cout << endl;

    areaParcelaD = (baseParcelaD * alturaParcelaD) / 2;
    valorVentaParcelaD = areaParcelaD * precioMetroParcelaD;

    cout << "El precio por metro cuadrado introducido para la parcela D fue: " << precioMetroParcelaD << " pesos." << endl;
    cout << "Actualmente el area de la parcela D es equivalente a: " << areaParcelaD << " metros cuadrados" << endl;
    cout << "Entonces el precio de venta final de la parcela D, seran: " << valorVentaParcelaD << " pesos"<< endl << endl;

    metrosComprados = metrosComprados + areaParcelaD;

    TeclaPresionada("Hemos finalizado, pulse cualquier tecla para continuar...\n\n");
    BorraPantalla();



    // Parte 2 del problema

    float valorVentaParcelasTotal;
    cout << "Resumen..." << endl << endl;

    cout << "Precio de venta de la parcela A : " << valorVentaParcelaA << " pesos." << endl;
    cout << "Precio de venta de la parcela B : " << valorVentaParcelaB << " pesos." << endl;
    cout << "Precio de venta de la parcela C : " << valorVentaParcelaC << " pesos." << endl;
    cout << "Precio de venta de la parcela D : " << valorVentaParcelaD << " pesos." << endl << endl;

    valorVentaParcelasTotal = valorVentaParcelaA + valorVentaParcelaB + valorVentaParcelaC + valorVentaParcelaD;



    cout << "Ha comprado un valor total de " << metrosComprados << " metros, a " << valorVentaParcelasTotal << " pesos." << endl << endl;


    TeclaPresionada("Pulse una tecla para continuar...\n\n");
    BorraPantalla();



    // Parcelas poseídas por el señor Chumusco

    float areaPreObtenida = (areaParcelaD * 5); // Variable que almacena el valor de las parcelas que ya tenia Don Churumusco
    float precioMetrosPreObtenidos = 4000;
    float valorMetrosPreObtenidos = precioMetrosPreObtenidos * areaPreObtenida;
    float areaTotalFinca = areaPreObtenida + metrosComprados;

    cout << "Ahora veremos el total de metros cuadrados de parcelas que Don Churumusco poseia previamente" << endl << endl;
    cout << "Se puede observar que este tenia 5 terrenos con un area equivalente a la parcela D, que serian 4.5 metros cuadrados por parcela" << endl << endl;

    cout << "Entonces podemos asegurar que tenia: " << areaPreObtenida << " metros cuadrados en parcelas y estos los cotizo a un precio de RD$" << precioMetrosPreObtenidos << " pesos por cada metro cuadrado." <<endl << endl;


    TeclaPresionada("Presione una tecla para pasar al informe final...");

    BorraPantalla();

    float valorTotalFinca = valorMetrosPreObtenidos + valorVentaParcelasTotal;

    cout << "Informe final..." << endl << endl;
    cout << "La finca completa tiene para Don Churumusco un valor total en pesos dominicanos de: RD$" << valorTotalFinca << " y esta posee un total de " << areaTotalFinca << " metros cuadrados"<< endl << endl;



    return 0;
}
