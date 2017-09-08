#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>

int main()
{
    float num1=0;
    float num2=0;
    float sumar = 0;
    float resta = 0;
    float multiplicacion = 0;
    float division = 0;
    long long int factorial = 0;
    int validacioncero=0;

    char seguir='s';
    int opcion=0;


    while(seguir=='s')
    {



        printf("1- Ingresar 1er operando (A=%.2f)\n ", num1);

        printf("2- Ingresar 2do operando (B=%.2f)\n ", num2);

        printf("3- Calcular la suma (A+B)=%.2f\n", sumar);

        printf("4- Calcular la resta (A-B)= %.2f\n", resta);

        printf("5- Calcular la division (A/B)=%.2f\n", division);

        printf("6- Calcular la multiplicacion (A*B)=%.2f\n", multiplicacion);

        printf("7- Calcular el factorial (A!)=%lld\n",factorial);

        printf("8- Calcular todas las operacione\n");

        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {

        case 1:
            num1 = pedirnumero();
            system("cls");

            break;

        case 2:

            num2 = pedirnumero();
            system("cls");
            break;

        case 3:
            sumar = Funcionsumar(num1, num2);
            system("cls");

            printf("la suma es %.2f\n",sumar);

            break;
        case 4:
            resta=Funcionresta(num1, num2);
            system("cls");
            printf("la resta es %.2f\n ", resta);

            break;
        case 5:

            validacioncero=Funcioncomparacion(num1, num2);
            if(validacioncero==1)
            {
                division=Fuciondivision(num1,num2);
                system("cls");
                printf("La division es  %.2f\n", division);

            }
            else
            {
                printf("error!!! ingrese un numero distinto de 0\n");


            }
            break;
        case 6:
            multiplicacion=Funcionmultiplicacion(num1, num2);

            system("cls");
            printf(" la multiplicacion es %.2f\n", multiplicacion);

            break;
        case 7:
            if(num1<0)
            {

                printf("error, ingrese un numero positivo\n");

            }
            if(!(num1>=0 && num1<20))
            {
                printf("error, ingrese un numero entre 0 y 20\n");


            }
            else
            {


                factorial=Funcionfactorial(num1);
                system("cls");
                printf(" el factorial es %lli\n ", factorial);


            }

            break;

        case 8:
            sumar=Funcionsumar( num1,  num2);
            printf("la suma es %.2f\n",sumar);

            resta=Funcionresta(num1, num2);
            printf("la resta es %.2f\n ", resta);

            validacioncero=Funcioncomparacion(num1, num2);
            if(validacioncero==1)
            {
                division=Fuciondivision(num1,num2);
                system("cls");
                printf("La division es  %.2f\n", division);

            }
            else
            {
                printf("error!!! ingrese un numero distinto de 0\n");


            }



            multiplicacion=Funcionmultiplicacion(num1, num2);

            printf(" la multiplicacion es %.2f\n", multiplicacion);


            if(num1<0)
            {

                printf("error, ingrese un numero positivo\n");

            }
            if(!(num1>=0 && num1<20))
            {
                printf("error, ingrese un numero entre 0 y 20\n");


            }
            else
            {


                factorial=Funcionfactorial(num1);
                system("cls");
                printf(" el factorial es %lli\n ", factorial);


            }


            break;

        case 9:

            seguir = 'n';
            break;
        default:
            printf("ERROR!, INGRESE UN NUMERO DEL 1 AL 9\n");
        }
    system("cls");

    }
    return 0;
}
