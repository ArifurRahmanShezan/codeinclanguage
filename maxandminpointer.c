//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *x=&a;
    int *y=&b;
    int *z=&c;
    if(*x<*y){
        if(*x<*z){
            printf("%d ",*x);
        }
        else{
            printf("%d ",*z);
        }
    }
    else{
        if(*y<*z){
            printf("%d ",*y);
        }
        else{
            printf("%d ",*z);
        }
    }
    if(*x>*y){
        if(*x>*z){
            printf("%d",*x);
        }
        else{
            printf("%d",*z);
        }
    }
    else{
        if(*y>*z){
            printf("%d",*y);
        }
        else{
            printf("%d",*z);
        }
    }
}