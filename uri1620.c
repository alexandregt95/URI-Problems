#include <stdio.h>

int main(){
    long double x, l;
    while(scanf("%LF",&l))
    {       
        if(l+0.000001>0 && l-0.000001<0)
            break;
        x=(2.0*(l-2.0)+1.0)/l-1.0;
        //x=((2.0*(l-2.0)+1.0)-l)/l;
        printf("%.6LF\n",x);
    }
    return 0;
}