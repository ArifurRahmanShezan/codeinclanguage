//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int year=n/365;
    printf("%d years\n",year);
    int num=n%365;
    int month=num/30;
    printf("%d months\n",month);
    int number=num%30;
    printf("%d days",number);

}