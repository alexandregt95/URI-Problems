#include <stdio.h>

int tempo[1000],pizza[100],A[100][1000];

int mochila(int n,int p){
    int i;
    if (n==0 || p==0){
        A[n][p]=0;
    }
    else 
    for(i=n-1;i>=0;i--){
        if(tempo[i]>p){
            return mochila(n-1,p);//nao coloca
        }
        else{
            if(tempo[n]>){//se o caso for o melhor
                A[n-1][p-pizza[n]]=A[n][p]+tempo[i];
                return mochila(n-1,p-pizza[n]);//coloca
            }
            else
                return mochila(n-1,p);//nao coloca
        }
    }
}

int main(){
    int caso,i,j,C,c;
    while(1){
        scanf(" %d %d",&caso,&C);
        if(caso==0)
            break;
        else{
            for(i=0;i<caso;i++){
                scanf(" %d %d",&tempo[i],&pizza[i]);
            }
            mochila(caso,C);
            printf("%d min.\n",);
        }
    }
}