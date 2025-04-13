#include<stdio.h>
#include"Header-file-for-Swaping-Numbers.h"
int main(){
    int a = 1;
    int b = 19898;
    swap(&a,&b);
    printf("%d\n%d",a,b);
}
