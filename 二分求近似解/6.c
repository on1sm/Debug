#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, 
                 int q, 
                 double (*func)(int, int, double));
double f(int p, 
         int q, 
         double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, 
                 int q, 
                double (*func)(int, int, double)) {
    double a =-20;
    double b = 20;
    double m=(a+b)/2;
    while(fabs(func(p,q,m)) > EPSILON)
    {
        if(func(p,q,m) * func(p,q,a) < 0)
        {
            b = m;
        }
        else
        {
            if(f(p,q,m) * f(p,q,b) < 0)
            {
                a = m;
            }
        }
        m= (a+b) / 2;	
    }
    return m;
}

double f(int p,  
         int q, 
         double x) {
    return p * x + q;
}
