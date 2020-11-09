#include <stdio.h>
#include "myMath.h"



int main(){
    double x;
    printf ("please inset real number\n");
    scanf("%lf", &x);

    double res1= sub(add(Exponent(x),Power(x,3)),2);
    double res2=add(mul(x,3),mul(Power(x,2),2));
    double res3=sub(div(mul(Power(x,3),4),5),mul(x,2));
    
    
    printf("the value of f(x)=e^x+x^3-2 at the point %f is: %0.4lf\n",x,res1);
    printf("the value of f(x)=3*x+2x^2 at the point %f is: %0.4lf\n",x,res2);
    printf("the value of f(x)=(4*x^3)/5-2x at the point %f is: %0.4lf\n",x,res3);

    return 0;

}