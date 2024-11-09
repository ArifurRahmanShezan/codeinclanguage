#include<stdio.h>
void func(int x,int n){
    if(x>n){
        return;
    }
    printf("%d\n",x);
    func(x+1,n);
    printf("%d\n",x);
}
int main(){
    printf("before func call in main\n");
    func(1,5);
    printf ("after func call in main\n");
}