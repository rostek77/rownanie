# include <stdio.h>
# include <math.h>
# include <stdlib.h>
int a,b,c,delta,x1,x2;

int main()
{
printf("Podja wartosc a: ");
scanf("%d",&a);

if(a==0)
{
printf("Podana wartość dla a nie moze wynosic 0 !!!\n");
}
else
{
printf("Podaj wartosc b: ");
scanf("%d",&b);
printf("Podaj wartosc c: ");
scanf("%d",&c);
delta=0;
delta=(b*b)-(4*a*c);
printf("Delta wynosi: %d\n",delta);
}
  if (delta>0)
  {
	delta=sqrt(delta);
	x1=((-b-delta)/2*a);
	x2=((-b+delta)/2*a);
	printf("Rownanie kwadratowe ma dwa pierwiastki: \n");
	printf("X1: %d\n",x1);
	printf("X2: %d\n",x2);
  }
	else if(delta==0)
	{
		x1=-b/2*a;
		printf("Rownanie kwadratowe ma jeden pierwiastek: \n");
		printf("X1: %d\n",x1);
	}
		else
		{
		printf("Rownanie nie ma pierwiastkow !\n");
		}
		
	
	
    
	
return 0;

}
