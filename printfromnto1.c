//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include<stdio.h>
void print(int n){
    if(n<1){
        return;
    }
    printf("%d",n);
    if(n>1){
        printf(" ");
    }
    print(n-1);
    
}

int main(){
    int n;
    scanf("%d",&n);
    print(n);
}