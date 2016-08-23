#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;//variable para ingresar numero
    int contador;//contador para cantidad de datos a ingresar
    int min;//asigna el valor minimo
    int max;//asigna el maximo
    int acumulador=0;//sumatoria de numeros
    float promedio;//para sacar el promedio de totales

    for(contador=0;contador<5;contador++)//el contador arranca en 1 y mientras sea menor que 6 (se repite 5 veces)
    {
        printf("Ingrese el dato numero %d: ",contador+1);//muestra lo que pido + el numero del contador
        scanf("%d",&numero);//almaceno el numero
        if(contador==0)//inicializacion de min y max
        {
            min=numero;
            max=numero;
        }
        if(max<numero)//determinar el maximo
        {
            max=numero;//asigna el maximo
        }
        else
        {
            if(min>numero)//determina el minimo
            {
                min=numero;//asigna el minimo
            }
        }
        acumulador=acumulador+numero;//sumatoria de numeros

    }
        promedio=acumulador/contador;//obtiene el promedio del acumulador al contador
        printf("La Suma de numeros %d.\n",acumulador);//muesto el acumulado
        printf("El numero Maximo fue: %d\n",max);//muestro el max
        printf("El Minimo Ingresado fue: %d\n",min);//muestro el minimo
        printf("El promedio es de: %f",promedio);//muestro el promedio

    return 0;
}
