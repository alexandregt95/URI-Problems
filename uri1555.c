#include <stdio.h>
#include <math.h>

int main(){
    int caso,i,x,y,bet,raf,car;
    scanf("%d",&caso);
    for(i=0;i<caso;i++)
    {
        scanf("%d %d",&x,&y);
        bet=2*pow(x,2)+pow((5*y),2);
        raf=pow((3*x),2)+pow(y,2);
        car=(-100)*x+pow(y,3);
        if(bet>raf&&bet>car)
            printf("Beto ganhou\n");
        else if(car>bet && car>raf)
            printf("Carlos ganhou\n");
        else
            printf("Rafael ganhou\n");
    }
}