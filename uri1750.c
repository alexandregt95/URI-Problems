#include<stdio.h>
#include<stdlib.h>

int fuso[1100];

int min(int y,int x){
    if(y>x) return x;
    else return y;
}

int comparetor (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){
    int i,pessoas,dif1=0,dif2=0,n1,n2;
    scanf(" %d",&pessoas);
    for(i=0;i<pessoas;i++){
        scanf(" %d",&fuso[i]);
    }
    
    qsort (fuso, pessoas, sizeof(int), comparetor);
    
    for(i=0;i<pessoas;i=i+2){
        n1=abs(fuso[i]-fuso[i+1]);
        n2=24-abs(fuso[i]-fuso[i+1]);
        dif2+=min(n1,n2);
    }
    
    
    
    n1=abs(fuso[0]-fuso[pessoas-1]);
    n2=24-abs(fuso[0]-fuso[pessoas-1]);
    dif1+=min(n1,n2);
    
    for(i=1;i<pessoas-1;i=i+2){
        n1=abs(fuso[i]-fuso[i+1]);
        n2=24-abs(fuso[i]-fuso[i+1]);
        dif1+=min(n1,n2);
    }
    
    printf("%d\n",min(dif1,dif2));
}