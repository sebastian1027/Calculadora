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
float resultado;
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
    
    
        
    
    if (PORTBbits.RB0 == 1){
        resultado = a+b;
        printf("El resultado de la Suma es: \n", "%f",resultado);
    }
    if (PORTBbits.RB1 == 1){
        resultado = a-b;
        printf("El resultado de la Resta es: \n", "%f",resultado);
        
    }
    if (PORTBbits.RB2 == 1){
        resultado = a*b;
        printf("El resultado de la Multiplicacion es: \n", "%f",resultado);        
    }
    if (PORTBbits.RB3 == 1){
        if (b=0){
            printf("Error, no es posible dividir entre 0");
            }
        resultado = a/b;
        printf("El resultado de la Division es: \n", "%f",resultado);
    }
    else {
        printf("Opcion Incorrecta\n ");
    }
   }
}