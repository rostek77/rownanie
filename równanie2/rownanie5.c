# include <stdio.h>
# include <math.h>
# include <stdlib.h>
float a,b,c,delta,x1,x2;

float main(int argc, char *argv[])
{
printf("Podja wartosc a: ");
scanf("%f",&a);

if(a==0)
{
printf("Podana wartość dla a nie moze wynosic 0 !!!\n");
}
else
{
printf("Podaj wartosc b: ");
scanf("%f",&b);
printf("Podaj wartosc c: ");
scanf("%f",&c);
delta=0;
delta=(b*b)-(4*a*c);
printf("Delta wynosi: %f\n",delta);
}
  if (delta>0)
  {
	delta=(float)sqrt(delta);
	x1=((-b-delta)/2*a);
	x2=((-b+delta)/2*a);
	printf("Rownanie kwadratowe ma dwa pierwiastki: \n");
	printf("X1: %f\n",x1);
	printf("X2: %f\n",x2);
  }
	else if(delta==0)
	{
		x1=-b/2*a;
		printf("Rownanie kwadratowe ma jeden pierwiastek: \n");
		printf("X1: %f\n",x1);
	}
		else
		{
		printf("Rownanie nie ma pierwiastkow !\n");
		}
		
		{
		system("\n\n\tPAUSE");
		}
    
	
return 0;

}
