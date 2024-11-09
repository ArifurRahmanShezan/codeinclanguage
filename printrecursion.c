//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include<stdio.h>
void recursion(int x,int n){
    if(x>n){
        return;
    }
    printf("I love Recursion\n");
    recursion(x+1,n);
}
int main(){
    int n;
    scanf("%d",&n);
    recursion(1,n);
}