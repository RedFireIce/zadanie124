#include <stdio.h>
#include <stdlib.h>
float prostokat(float a, float b);
float trojkat(float h, float pods);
int main(void){

for(;;)
{
int c=68 ;
float a;
float b;
float wynik;
float pods;
float h;
float wynik2;

printf("wybierz cos\n");
printf("1.pole ptostokata\n");
printf("2.pole trojkata\n");
printf("3. wyjscie\n");
scanf("%d", &c);
switch (c)

{

case 1:

    printf("wprowadz a\n");
    scanf("%f", &a);
    if (a<=0)
    {
        printf("wprowadzono zle wartosci, wartosc a musi byc wieksza od 0\n");
        exit (EXIT_FAILURE);
    };
    printf("wprowadz b\n");
    scanf("%f", &b);
    if (b<=0)
    {
        printf("wprowadzono zle wartosci, wartosc b musi byc wieksza od 0\n");
        return 0;
        exit(EXIT_FAILURE);

    };

   prostokat(a, b);/////////////////////////////Funkcja obliczaj¹ca pole prostok¹ta
    break;
case 2:

    printf("wprowadz podstawe trojkata\n");
    scanf("%f", &pods);
    if (pods<=0)
    {
        printf("wprowadzono zle wartosci, wartosc podstawy musi byc wieksza od 0\n");
        exit (EXIT_FAILURE);
    };
    printf("wprowadz wysokosc trojkata\n");
    scanf("%f", &h);
    if (h<=0)
    {
        printf("wprowadzono zle wartosci, wartosc h musi byc wieksza od 0\n");
        exit (EXIT_FAILURE);
    };
    trojkat(h, pods);/////////////////////////////////////Funkcaj obliczaj¹ca pole trojkata
    break;

case 3:
    exit;
    return 0;
}
}
};

float prostokat(float a, float b)
{
    float wynik;
     wynik = a*b;
     printf("wynik=" "%f\n", wynik);
     return wynik;
};
float trojkat(float h, float pods)
{
    float wynik;
    wynik = 0.5*pods*h;
    printf("wynik=" "%f\n", wynik);
    return wynik;
};


