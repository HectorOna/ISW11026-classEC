/******************************************************************************
Datos de entrada:
peso
altura
nombre
Datos de salida
imc
peso
altura
nombre
Proceso:
Pedir el nombre, la altura y el peso
usando la formula IMC=peso/(altura^2), tomaremos los 
datos ingresados y los usaremos en la anterior formula.
mostramos los datos ingresados(nombre,altura y peso ) y el imc 
*******************************************************************************/
#include <stdio.h>// Definimos las librerias stdio y math
#include<math.h>
void main() // definimos la funcion principal

{
 char nombre[10];// definimos las variables tipo char (caracter)
float peso=0,altura=0,imc=0;// definimos las variables tipo Float (decial)
printf("ingrese su nombre");//solicitamos nombre
scanf("%s",nombre);//leemos nombre
printf("ingrese su altura");//solicitamos altura
scanf("%f",&altura);//leemos altura
printf("ingrese su peso");//solicitamos peso
scanf("%f",&peso);//leemos peso
imc=peso/pow(2,altura);//realizamos calculos
printf("*******************************\n");
printf("su nombre es:%s\n",nombre);//mostramos nombre
printf("su altura es:%.2f\n",altura);//mostramos altura
printf("su nombre es:%.2f\n",peso);//mostramos peso
printf("*******************************\n");
printf("su IMC es:%.2f\n",imc);//mostramos imc
printf("*******************************\n");  
}

