#include<stdio.h>

int main(){
    int i,n,pesodia,pesototal=0;
    double preco,precototal=0,mediapeso,mediapreco;
    char fruta[500];
    scanf("%d",&n);
        for(i=0;i<n;i++){
        scanf("%lf",&preco);
        precototal+=preco;
        pesodia=0;
        while(scanf("%s",fruta)==1){
            pesodia++;
        }
        pesototal+=pesodia;
        printf("day %d: %d kg\n",i+1,pesodia);
    }
    mediapreco=precototal/n;
    mediapeso=pesototal/n;
    printf("%lf kg by day\nR$ %lf by day\n",mediapeso,mediapreco);
}