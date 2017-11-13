#include <stdio.h>
#include <math.h>
 
float main()
{
float a,b,c,delta;
printf("podaj wspolczynnik a: ");
scanf("%f",&a);
printf("podaj wspolczynnik b: ");
scanf("%f",&b);
printf("podaj wspolczynnik c: ");
scanf("%f",&c);
delta =(b*b)-(4*a*c);
if
        (a==0)
        {
        printf("to nie rownanie kwadratowe");
        }
else
        {
 
        if
                (delta>0)
                {
                printf("pierwsze rozwiazanie x:%f\n");
		(-b-(float)sqrt(delta))/(2*a);
                printf("drugie rozwiazanie x:%f\n");
		(-b+(float)sqrt(delta))/(2*a);
                }
        else
        {
 
                if
                        (delta == 0)
                        {
                        printf("jedno rozwiazanie x:%f\n",-b/(2*a));
                        }
                else
                        {
                        if
                        (delta < 0)
                        {
                        printf("brak rozwiazan");
                        }
                }
        }
}
 
return 0;
}
