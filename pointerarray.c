#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    printf("%d %d\n",&arr[0],p);
    printf("%d\n",(p+2));
    char a='a';
    char *b=&a;
    printf("%c %c",b,(b+1));
}