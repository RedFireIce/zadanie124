#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


float pole_prostokata();
float pole_trojkata();

int main()
{
for(;;)
{

int c=68 ;

printf("Wybierz figure\n");
printf("1.pole prostokata\n");
printf("2.pole trojkata\n");
printf("3. wyjscie\n");
c =getch();
switch (c)

{

case '1':
pole_prostokata();
for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;

case '2':
pole_trojkata();
for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;

case '3':
exit(EXIT_SUCCESS);


default:
    printf("Zly wybor prosze wybrac cyfre od 1 do 3\n");
    printf("nacisnij dowolny przycisk zeby wrocic do menu\n");
    //exit(EXIT_SUCCESS);
    getch();
    for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;
}

}
    return 0;
};

float pole_prostokata()
{
    float a, b, wynik;
    printf("wprowadz a\n");
    scanf("%f", &a);
    if (a<=0)
    {
         printf("a musi byc wieksze od 0\n");
         exit (EXIT_FAILURE);
    };
     printf("wprowadz b\n");
    scanf("%f", &b);
    if (b<=0)
    {
         printf("b musi byc wieksze od 0\n");
         exit (EXIT_FAILURE);
    };
    wynik = a*b;
    printf("wynik= ""%.4f", wynik);
    return wynik;
};


float pole_trojkata()
{
    float a, h, wynik;
    printf("wprowadz a\n");
    scanf("%f", &a);
    if (a<=0)
    {
         printf("a musi byc wieksze od 0\n");
         exit (EXIT_FAILURE);
    };
     printf("wprowadz h\n");
    scanf("%f", &h);
    if (h<=0)
    {
         printf("h musi byc wieksze od 0\n");
         exit (EXIT_FAILURE);
    };
    wynik = (a*h)/2.0;
    printf("wynik= ""%.4f", wynik, "\n");
    return wynik;
};


