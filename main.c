#include <stdio.h>
#include <stdlib.h>

int main()
{
for(;;)
{
int c=68 ;
float a;
float b;
float wynik;
float pods;
float h;
float wynik2;
int t;
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
    printf("wprowadz b\n");
    scanf("%f", &b);
    wynik = a*b;
    printf("wynik=" "%f\n", wynik);
    if (wynik<=0)
    {
        printf("wprowadzono zle wartosci\n");
    };
    scanf("%d", &t);
    break;
case 2:

    printf("wprowadz podstawe trojkata\n");
    scanf("%f", &pods);
    printf("wprowadz wysokosc trojkata\n");
    scanf("%f", &h);
    wynik2 = 0.5*pods*h;
    printf("wynik=" "%f\n", wynik2);
    if (wynik2<= 0)
    {
        printf("wprowadzono zle wartosci\n");
    };

    break;

case 3:
    exit;
}
    return 0;
    }
}

