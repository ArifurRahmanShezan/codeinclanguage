//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
#include<stdio.h>
int sum(int x,int y){
    int sum;
    sum=x+y;
    printf("%d",sum);
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
}