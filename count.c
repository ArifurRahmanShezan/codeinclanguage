//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include<stdio.h>
#include<string.h>
int main(){
    char a[1000000];
    scanf("%s",&a);
    int sum=0;
    int length=strlen(a);
    for(int i=0;i<length;i++){
        sum+=a[i]-48;
    }
    printf("%d",sum);
}