#include "myMath.h"
#define exp 2.718281828

double Exponent (int x){
    return Power(exp,x);
}

double Power(double x, int y){

    int iteration;
    
    /*check if the power iz positive or negitive.
    if its negitive , we will make it positive. */
    
    iteration = y<0 ? y*(-1) : y;
     double res=x;

    for(int i=1; i<iteration;i++){
       res=res*x;
    }
    

    return y<0 ? 1/res: res;

}

