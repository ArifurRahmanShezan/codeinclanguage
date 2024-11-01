//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s\n%s",&a,&b);
    int cmp=strcmp(a,b);
    if(cmp<=0){
        printf("%s",a);
    }
    else{
        printf("%s",b);
    }
}