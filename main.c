#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2,x,xr1,xr2,xi1,xi2;
    printf("donner la valeur de a \n");
    scanf("%f",&a);
     printf("donner la valeur de b \n");
    scanf("%f",&b);
     printf("donner la valeur de c \n");
    scanf("%f",&c);
    delta=b*b -4*a*c;

    if(delta>0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("deux solution dans R: \n x1= %.1f \n x2= %.1f   ",x1,x2);
    }

    if  (delta==0)
   {
        x=-b/(2*a);
        printf( "un seul solution dans R: \n x= %.1f",x);
    }

if(delta<0)
    {
       xr1=-b/(2*a);
       xi1=sqrt(-delta)/(2*a);
       xi2=-xi1;
       xr2=xr1;
       printf("les deux solution dans C: \n x1= %.2f +%.2fi \n x2= %.2f %.2fi",xr1,xi1,xr2,xi2);
     }

}