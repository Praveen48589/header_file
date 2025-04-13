#include<stdio.h>
#include "Factorial.h"
int main(){
    int n;
    printf("Input the Number Till which You want to get Factorial : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       int b = factorial(i);
       printf("%d\n",b);
    }
}