#include<stdio.h>
int main(){
    int a=5,b=6;
    
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d %d\n",a,b);
    int *x=&a,*y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d\n",a,b);

}