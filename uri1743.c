#include <stdio.h>

int main(){
    int v[10],i,encaixa=1,n;
    for(i=0;i<5;i++){
        scanf(" %d",&v[i]);
    }
    for(i=0;i<5;i++){
        scanf(" %d",&n);
        if(n==v[i]) encaixa=0;
    }
    if(encaixa==1) printf("Y\n");
    else printf("N\n");
}