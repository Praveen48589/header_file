#include<stdio.h>
#include"SWAP_BY_POINTERS.h"
int main(){
    int a = 1;
    int b = 19898;
    swap(&a,&b);
    printf("%d\n%d",a,b);
}
