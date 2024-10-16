//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if (c>='a' && c<='z'){
        printf("%c",c-32);
    }
    else if(c>='A'&& c<='Z'){
        printf("%c", c+32);
    }
}