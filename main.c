#include <stdio.h>
#include <stdlib.h>

int main()
{
for(;;)
{
int c=68 ;
int a;
int b;
int wynik;
int pods;
int h;
int wynik2;
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
    scanf("%d", &a);
    printf("wprowadz b\n");
    scanf("%d", &b);
    wynik = a*b;
    printf("wynik=" "%d\n", wynik);
    scanf("%d", &t);
    break;
case 2:

    printf("wprowadz podstawe trojkata\n");
    scanf("%d", &pods);
    printf("wprowadz wysokosc trojkata\n");
    scanf("%d", &h);
    wynik2 = 0.5*pods*h;
    printf("wynik=" "%d\n", wynik2);
    break;

case 3:
    exit;
}
    return 0;
    }
}

