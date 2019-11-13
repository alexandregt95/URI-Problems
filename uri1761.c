#include<stdio.h>
#include<math.h>

#define PI 3.141592654

int main(){
    double graus,base,elfo,rad,cordao;
        while(scanf("%lf %lf %lf",&graus,&base,&elfo)!=EOF){
        rad=(graus*PI/180);
        cordao=5*(tan(rad)*base+elfo);
        printf("%.2lf\n",cordao);
        }
}