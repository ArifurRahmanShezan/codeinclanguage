//https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/difference-16-1
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *x=&a;
    int *y=&b;
    if(*x>*y){
        printf("%d",*x-*y);
    }
    else{
        printf("%d",*y-*x);
    }
}