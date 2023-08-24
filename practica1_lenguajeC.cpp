#include <stdio.h>
#include <stdlib.h>

float Calculadora()
{
    float num1, num2, res;
    int o;

    printf("dame un numero: ");
    scanf("%f",&num1);
    printf("dame otro numero: ");
    scanf("%f",&num2);
    printf("selecciona la operacion que quieres realizar\n 1)Suma.\n2)Resta.\n3)Multiplicacion.\n4)Division.\n");
    scanf("%d",& o);

    switch(o)
    {
        case 1:
            res= num1+num2;
            printf("el resultado de la suma es: %f",res);
            break;

        case 2:
            res=num1-num2;
            printf("el resultado de la resta es: %f",res);
            break;

        case 3:    
            res=num1*num2;
            printf("el resultado de la multiplicacion es: %f",res);
            break;

        case 4:
            res=num1/num2;
            printf("el resultado de la division es: %f",res);
            break; 

        default :
            printf("Opcion incorrecta");
    }
    return 0;
}

int adivinarNum()
{
    int num, adv, i;
    adv= rand()%100+1;
    printf("Adivina el numero entre el 1 y 100\n");
    for(i=0;i<100 && num != adv;i++)
    {
        //fflush;
        printf("Dame un numero para adivinar\n");
        scanf("%d",& num);
        if(num != adv)
        {
            if(adv < num)
            {
                printf("El numero a adivinar es mas chico\n");
            }
            if(adv > num)
            {
                printf("el numero a adivinar es mas grande\n");
            }
        }
        else
        {
            printf("Felicidades, el numero a adivinar es %d y tu pusiste %d. ADIVINASTE", adv, num);
            break;
        }
    
    }
    return 0;
}

float areas()
{
    int o;
    float num1, num2, area;

    printf("\nbienvenido a la calculadorade areas\nque operacion quieres hacer?\n");
    printf("1) triangulo.\n2) circulo.\n3) rectangulo.\n4) cubo.\n5) cilindro.\n");
    scanf("%d",& o);

    switch (o)
    {
        case 1:
            // (b * h) /2
            printf("dame la base: ");
            scanf("%f",& num1);
            printf("dame la altura: ");
            scanf("%f",& num2);
            area= (num1 * num2)/2;
            printf("el area es: %f", area);
            break;

        case 2:
            //pi * r * r
            printf("dame el radio: ");
            scanf("%f",& num1);
            area= 3.1416 * num1 * num1;
            printf("el area es: %f", area);
            break;

        case 3:
            // b * h
            printf("dame la base: ");
            scanf("%f",& num1);
            printf("dame la altura: ");
            scanf("%f",& num2);
            area= num1 * num2;
            printf("el area es: %f", area);
            break;

        case 4:
            // L * L * 6

            printf("dame un lado: ");
            scanf("%f",& num1);
            area= num1 * num1 * 6;
            printf("el area es: %f", area);
            break;  

        case 5:
            // (2 * pi r h) + (2 * pi * r²)

            printf("dame el radio: ");
            scanf("%f",& num1);
            printf("dame la altura: ");
            scanf("%f",& num2);
            area= (2 * 3.1416 * num1 * num2) + (2 * 3.1416 * num1 * num1);
            printf("el area es: %f", area);
            break;          
    }
    return 0;
}

int main ()
{
    int op;

    printf("Indica la opcion que quieres ejecutar\n");
    printf("1) calculadoora.\n2) juego de adivinar un numero.\n3) calculadora de areas.\n");
    scanf("%d",& op);

    switch(op)
    {
        case 1:
            Calculadora();
            break;

        case 2: 
            adivinarNum();
            break;

        case 3:
            areas();
            break;
    }
    return 0;
}