#include<stdio.h>
#include<string.h>
int main(){
    int i=0,soma=0,nums=0;
    double media=0;
    char v[101];
    scanf(" %s",v);
    for(i=0;i<strlen(v);i++){
        if(v[i]-'0'==0){
            soma+=9;
        }
        else{
            soma=soma+(v[i]-'0');
            nums++;
        }
        //printf("%d\n",soma);
    }
    media=soma*1.00/nums;
    printf("%.2lf\n",media);
}