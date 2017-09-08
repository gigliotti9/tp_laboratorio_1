#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float pedirnumero()
{

    float numero;

    printf("ingrese el numero ");

    scanf("%f", &numero);


    return numero;




}

float Funcionsumar(float num1, float num2)
{


    float resultado= num1 + num2;

    return resultado;

}

float Funcionresta(float num1, float num2)

{
    float resultado=num1-num2;

    return resultado;

}


float Fuciondivision(float num1, float num2)
{

    float resultado;

    resultado= num1 / num2;



    return resultado;


}

float Funcioncomparacion(float num1,  float num2)
{

    int respuesta = 0;
    if(num1!=0 && num2!=0)
    {

        respuesta= 1;

    }
    return respuesta;



}


float Funcionmultiplicacion(float num1, float num2)
{

    float resultado = num1 * num2;

    return resultado;


}


long long int Funcionfactorial(float num1)
{
    int factorial=1 ;
    int i;



             for(i = (int)num1; i>1 ; i--)
                {


        factorial= factorial *  i;

             }


    return factorial;
}




















