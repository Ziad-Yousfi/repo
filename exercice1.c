#include<stdio.h>
int main(){
    int n,i,a;
    printf("Entrer n : ");
    scanf("%d",&n);
    a=0;
    for(i=2;i<n;i++){
        if(n%i==0){
        a=1;
        break;
        }
    }
    if (a=0){
        printf("%d est un nombre premier",n);
    }
    if (a=1){
        printf("%d n'est pas un nombre premier",n);
    }
    return 0;
}