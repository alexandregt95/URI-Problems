#include<stdio.h>

int main(){
    int i,n,m,v[2500];
    for(i=0;i<2450;i++){
        v[i]=0;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        v[m]++;
    }
    for(i=0;i<2050;i++){
        if(v[i]>0){
            printf("%d aparece %d vez(es)\n",i,v[i]);
        }
    }
}