#include <stdio.h>
int main(){
    int num1; //tipo de variable int > declara nombre de la variable num1
    int num2; //tipo de variable int > nombre de la variable num2
    int resultado; //tipo de variable int > nombre de la variable Resultado
    printf("ingrese el primer valor \n"); //muestra texto en pantalla
    scanf("%d",&num1); //scanf solicita introducir una variable %d, &num1 guarda el 
    //valor introducido en la variable escrita
    printf("ingrese el segundo valor \n");
    scanf("%d",&num2);
    resultado = num1 + num2; //guarda en la variable resultado la suma de los valores num1 y num2
    printf("El resultado de la suma es: %d\n", resultado); //imprime la suma es, variable resultado

    printf("Multiplicacion\n");
    printf("ingrese el primer valor \n");
    scanf("%d",&num1);
    printf("ingrese el segundo valor \n");
    scanf("%d",&num2);
    resultado = num1 * num2;
    printf("el resultado de la multiplicacion es:%d\n",resultado);
    return 0;
}