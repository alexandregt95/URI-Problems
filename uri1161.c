#include <stdio.h>

/*unsigned long long int fatorial(int n){
    if(n==0)
        return 1;
    else
        return n*fatorial(n-1);
}**/

int main(){
    unsigned long long int fat[21];
    /*int i;fat[0]=1;
    for(i=1;i<21;i++)
    {
        fat[i]=i*fat[i-1];
    }*/
    int n1,n2;
    while(scanf("%d %d", &n1, &n2)){
        printf("%llu\n",fat[n1]+fat[n2]);
    }
    return 0;
}