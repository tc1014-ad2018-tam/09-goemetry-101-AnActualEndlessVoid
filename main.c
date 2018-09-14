/*
 * Este programa fue desarrolaldo con el objetivo de darle al usuario las opciones de calcular diferentes cosas
 *
 * Mario Emilio Aguilar Chung
 * 9/14/2018
 * A01411210@itesm.mx
 *
 */

#include <stdio.h>
#include <math.h>

//Menu para calcular perimetro
int perimeter (double l, double w, double p){
    char menu;
    while (1) {
       //Opciones para el usuario y recopilacion de su respuesta
        printf ("Presione A para calcular perimetro de un cuadrado \n");
        printf ("Presione B para calcular perimetro de un triangulo equilatero \n");
        printf ("Presione C para calcular perimetro de un rectangulo \n");
        printf ("Presione D para calcular perimetro de un pentagono regular \n");
        printf ("Presione X para salir \n");
        printf ("Eleccion: \n");
        scanf (" %c", &menu);

        //Los diferentes resultados de las opciones del usuario
        switch (menu) {
            case 'A' :
                printf ("Dame la longitud de uno de los lados \n");
                scanf ("%lf", &l);
                p = 4*l;
                printf ("El perimetro es %lf \n \n", p);
                break;

            case 'B':
                printf ("Dame la medida de un lado: \n");
                scanf ("%lf", &l);
                p = 3*l;
                printf ("El perimetro es %lf \n \n", p);
                break;

            case 'C':
                printf ("Dame la medida del largo: \n");
                scanf ("%lf", &l);
                printf ("Dame la medida del ancho: \n");
                scanf ("%lf", &w);
                p = 2*l + 2*w;
                printf ("El perimetro es %lf \n \n", p);

            case 'D' :
                printf ("Dame la medida de un lado: \n");
                scanf ("%lf", &l);
                p = 5*l;
                printf ("El perimetro es %lf \n \n", p);

//Regresa a menu principal
            case 'X':
                return 0;
        }
    }
}



//Menu para area
int surface (double l, double w, double a){
    char menu;
    while (1) {
        //Opciones para el usuario y recopilacion de su respuesta
        printf ("Presione A para calcular area de un cuadrado \n");
        printf ("Presione B para calcular area de un triangulo \n");
        printf ("Presione C para calcular area de un rectangulo \n");
        printf ("Presione X para salir \n");
        printf ("Eleccion: \n");
        scanf (" %c", &menu);

        //Los diferentes resultados para la respuesta del usuario
        switch (menu) {
            case 'A' :
                printf ("Dame la longitud de uno de los lados \n");
                scanf ("%lf", &l);
                a = pow (l,2);
                printf ("El perimetro es %lf \n \n", a);
                break;

            case 'B':
                printf ("Dame la medida de la base: \n");
                scanf ("%lf", &l);
                printf ("Dame la medida de la altura: \n");
                scanf ("%lf", &w);
                a = (l*w)/2;
                printf ("El area es %lf \n \n", a);
                break;

            case 'C':
                printf ("Dame la medida del largo: \n");
                scanf ("%lf", &l);
                printf ("Dame la medida del ancho: \n");
                scanf ("%lf", &w);
                a = l * w;
                printf ("El perimetro es %lf \n \n", a);
//Regresa al menu principal
            case 'X':
                return 0;
        }
    }
}

//Menu para volumen
int volume (double l, double w, double h, double r, double v){
    char menu;
    while (1) {
        //Las diferentes opciones para el usuario, y recopilacion de la informacion dada por el usuario
        printf ("Presione A para calcular area de un cubo \n");
        printf ("Presione B para calcular area de una piramide \n");
        printf ("Presione C para calcular area de una esfera \n");
        printf ("Presione X para salir \n");
        printf ("Eleccion: \n");
        scanf (" %c", &menu);
        switch (menu) {
            //Los diferentes resultados de la eleccion del usuario
            case 'A' :
                printf ("Dame la longitud de uno de los lados \n");
                scanf ("%lf", &l);
                v = pow (l,3);
                printf ("El volumen es %lf \n \n", v);
                break;

            case 'B':
                printf ("Dame la medida del largo de la base: \n");
                scanf ("%lf", &l);
                printf ("Dame la medida del ancho de la base: \n");
                scanf ("%lf", &w);
                printf ("Dame la medida de la altura de la base: \n");
                scanf ("%lf", &h);
                v = (l*w*h)/3;
                printf ("El volumen es %lf \n \n", v);
                break;

            case 'C':
                printf ("Dame la medida del radio: \n");
                scanf ("%lf", &r);
                v = 4/3*(pow(r,3))*(3.14159);
                printf ("El volumen es %lf \n \n", v);

//Regresa a menu principa;
            case 'X':
                return 0;

        }
    }


}

int main() {
    //Establece las diferentes variables
    char menu;
    double length = 0.0;
    double width = 0.0;
    double per = 0.0;
    double height = 0.0;
    double ar = 0.0;
    double vol = 0.0;
    double radius = 0.0;

//Loop para establecer el menu principal
    while (1) {
        printf ("Presiona A para calcular perimetro \n");
        printf ("Presiona B para calcular la superficie \n");
        printf ("Presiona C para calcular el volumen \n");
        printf ("Presiona X para salir \n");
        printf ("Eleccion: \n");
        scanf (" %c", &menu);
        switch (menu) {
            case 'A':
                perimeter (length, width, per);
                break;
            case 'B':
                surface (length, width, ar);
                break;
            case 'C':
                volume (length, width, height, radius, vol);
            case 'X':
                return 0;

}