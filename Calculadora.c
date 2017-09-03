/*
 * File:   Calculadora.c
 * Author: Sebastianl
 *
 * Created on 29 de agosto de 2017, 09:20 PM
 */


#include <xc.h>
#include "config.h"
#include <stdio.h> //libreria de matematica
#include <math.h>
//*********** variables a usar para la calculadora ************
float a = 10; //damos el valor a la primera variable
float b = 0;  //damos el segundo valor a la segunda Variable
float suma, resta, multiplicacion, division; // nombre de las variables para efectuar las operaciones
///*************************************************************
//int opcion;

void main(void) {
    
    TRISB = 0b11111111; //Declara el puerto B como entrada
    PORTB = 0;    //Limpia el Puerto B
    while (1) {      
        
    iniciar_uart(); //inicia el modulo usart para que lo podamos ver en pantalla
    //**************** Da a escojer el usuario la Operacion...
    printf("****************************************\n"); 
    printf("******      1.(RB0). Suma      *********\n");
    printf("******      2.(RB1). Resta     *********\n");
    printf("*****  3.(RB2). Multiplicacion  ********\n");
    printf("******     4.(RB3). Division   *********\n");
    printf("****************************************\n");   
    ///*********************** ...que se quiere utilizar, y que aparece como un Menu
    
    suma = a+b; //hace la suma de las 2 variables
    resta = a-b; //hace la resta de las 2 variables
    multiplicacion = a*b; //hace la multiplicación de las 2 variables
    division =  a/b; //hace la División de las 2 variables
    
    if (PORTBbits.RB0 == 1){        // pregunta si se ha presionado RB0, 
        printf("El resultado de la Suma es: %f\n", suma); //de ser asi muestra en pantalla el valor de la Suma
    }
    if (PORTBbits.RB1 == 1){        // pregunta si se ha presionado RB0,
        printf("El resultado de la Resta es: %f\n", resta); //de ser asi muestra en pantalla el valor de la Suma
        
    }
    if (PORTBbits.RB2 == 1){        // pregunta si se ha presionado RB0,
        printf("El resultado de la Multiplicacion es: %f\n", multiplicacion);        //de ser asi muestra en pantalla el valor de la Suma
    }
    if (PORTBbits.RB3 == 1){    // pregunta si se ha presionado RB0,
        if (b==0){              //en caso de que la variable b, que es la que esta dividiendo, sea 0
            printf("Error, no es posible dividir entre 0.\n");            //imprime este en pantalla "Error"
            }
        else {                    //en caso de que la variable b no sea 0, 
            printf("El resultado de la Division es: %f\n", division); // muestra en pantalla el valor de la División
        }
    }    
    
   } 
}