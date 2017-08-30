/*
 * File:   Calculadora.c
 * Author: Sebastianl
 *
 * Created on 29 de agosto de 2017, 09:20 PM
 */


#include <xc.h>
#include "config.h"
#include <stdio.h>
#include <math.h>

float a = 10;
float b = 5; 
float resultado, suma, resta, multiplicacion, division;
//int opcion;

void main(void) {
    
    TRISB = 0b11111111;
    PORTB = 0;
    while (1) {      
        
    iniciar_uart();
    printf("************************************\n");
    printf("******      1. Suma      *********\n");
    printf("******      2. Resta     *********\n");
    printf("*****  3. Multiplicacion  ********\n");
    printf("******     4. Division   *********\n");
    printf("************************************\n");   
    
    suma = a+b;
    resta = a-b;
    multiplicacion = a*b;
    division =  a/b;
    
    if (PORTBbits.RB0 == 1){        
        printf("El resultado de la Suma es: %f\n", suma);
    }
    if (PORTBbits.RB1 == 1){        
        printf("El resultado de la Resta es: %f\n", resta);
        
    }
    if (PORTBbits.RB2 == 1){        
        printf("El resultado de la Multiplicacion es: %f\n", multiplicacion);        
    }
    if (PORTBbits.RB3 == 1){
        if (b==0){
            printf("Error, no es posible dividir entre 0.\n");            
            }
        else {                    
        resultado = a/b;
        printf("El resultado de la Division es: %f\n", division);
        }
    }
    else {
        printf("Opcion Incorrecta\n ");
    }
   }
}