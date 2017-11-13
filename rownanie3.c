# include <stdio.h>
# include <math.h>
# include <stdlib.h>

float a,b,c,delta,x1,x2;

float main(void)
{
printf("Podja a: ");
scanf("%f",&a);
printf("Podaj b: ");
scanf("%f", &b);
printf("Podaj c: ");
scanf("%f", &b);
delta=(b*b)-(4*a*c);
x1=((-b-(float)sqrt(delta))/(2*a));
x2=((-b+(float)sqrt(detla))/(2*a));

if(a==0)

{
printf("Podana wartość dla a nie moze wynosic 0 !!!\n");
}

else
{
printf("To równanie kwadratowe");

	if (delta>0);
	{
	printf("Rownanie ma dwa pierwiastki");
	printf("Pierwszy to %f",x1);
		printf ("Drugi to %f",x2);
	}
	else
	{
	if(delta==0)
		{
		printf("Rownanie ma jeden pierwiastek");
		prinf("Test to %f", x1);

		}
		else
			{
			if(delta<0)
			{
			printf("Brak");

			}
		}
	}
    }		

		{
		system("\tPAUSE");
		}
    
	
return 0;

}
