#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main(void){
    double R;
    const double pi = acos(-1.0);
    scanf("%lf",&R);
    printf("%f\n",(double)pi*pow(R,2));
    printf("%f\n",(double)R*(R*2));

    return 0;
}