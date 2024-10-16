//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include<stdio.h>
int main(){
    int a,b,s;
    char c,d;
    scanf("%d %c %d %c %d",&a,&c,&b,&d,&s);
    if(c=='+'){
        if(a+b==s){
            printf("Yes");
        }
        else{
            printf("%d",a+b);
        }
    }
    else if(c=='-'){
        if(a-b==s){
            printf("Yes");
        }
        else{
            printf("%d",a-b);
        }
    }
    else if(c=='*'){
        if(a*b==s){
            printf("Yes");
        }
        else{
            printf("%d",a*b);
        }
    }
}