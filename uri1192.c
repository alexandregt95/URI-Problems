#include<stdio.h>

int main(){
    int result,n,i;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a);
        if(a[0]-'0'==a[2]-'0'){
            result = (a[0]-'0')*(a[2]-'0');
        }
        else if(a[1]-'a'>=0 && a[1]-'a'<=26){
            result = (a[0]-'0')+(a[2]-'0');
        }
        else{
            result = (a[2]-'0')-(a[0]-'0');
        }
        printf("%d\n",result);
    }
}